// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include "key.hpp"
#include <SFML/System/String.hpp>
#include <array>
#include <vector>

const std::array<sf::String, 12> degrees = {
    "root", L"♭2", "2", L"♭3", "3", "4", L"♭5", "5", L"♯5", "6", L"♭7", "7"
};

const std::array<sf::String, 12> compound_tones = {
    "octave", L"♭9", "9", L"♯9", "10", "11", L"♯11", "5", L"♭13", "13", L"♭7", "7"
};

static const std::array<sf::String, 12> sharp_names = {
    "A", L"A♯", "B", "C", L"C♯", "D", L"D♯", "E", "F", L"F♯", "G", L"G♯"
};

static const std::array<sf::String, 12> flat_names = {
    "A", L"B♭", "B", "C", L"D♭", "D", L"E♭", "E", "F", L"G♭", "G", L"A♭"
};

inline sf::String key_number_to_note_name(std::size_t index, Key key) {
    return is_sharp_key(key) ? sharp_names[index % 12] : flat_names[index % 12];
}

struct Chord {
    unsigned short root;                   // 0-11 PCC
    sf::String base_name;                 // e.g. "maj7", "sus2#", etc.
    std::vector<unsigned short> extra_tones;
    std::vector<unsigned short> omitted_tones;
    unsigned num_accidentals = 0;

    sf::String to_sf_string(Key k) const {
        sf::String res = key_number_to_note_name(root, k) + base_name;
        if (num_accidentals > 0) res += "(";
        unsigned remaining = num_accidentals;

        for (auto tone : omitted_tones) {
            res += "no" + degrees[tone % 12] + ( --remaining == 0 ? ")" : ",");
        }
        for (auto tone : extra_tones) {
            res += compound_tones[tone % 12] + ( --remaining == 0 ? ")" : ",");
        }
        return res;
    }
};
