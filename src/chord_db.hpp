// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <SFML/System/String.hpp>
#include <set>
#include <vector>

// TODO: constexpr in future
const std::vector<std::pair<const sf::String, std::set<unsigned short>>> chord_db = {
    {"maj", {4, 7}},
    {"7", {4, 7, 10}},
    {"9", {4, 7, 10, 2}},
    {"11", {4, 7, 10, 2, 5}},
    {"13", {4, 7, 10, 2, 5, 9}},
    {"min", {3, 7}},
    {"m7", {3, 7, 10}},
    {"m9", {3, 7, 10, 2}},
    {"m11", {3, 7, 10, 2, 5}},
    {"m13", {3, 7, 10, 2, 5, 9}},
    {"maj7", {4, 7, 11}},
    {"maj9", {4, 7, 11, 2}},
    {"maj11", {4, 7, 11, 2, 5}},
    {"maj13", {4, 7, 11, 2, 5, 9}},
    {"mMaj7", {3, 7, 11}},
    {"mMaj9", {3, 7, 11, 2}},
    {"mMaj11", {3, 7, 11, 2, 5}},
    {"mMaj13", {3, 7, 11, 2, 5, 9}},
    {"sus2", {2, 7}},
    {"7sus2", {2, 7, 10}},
    {"maj7sus2", {2, 7, 11}},
    {"sus4", {5, 7}},
    {"7sus4", {5, 7, 10}},
    {"9sus4", {5, 7, 10, 2}},
    {"maj7sus4", {5, 7, 11}},
    {"maj9sus4", {5, 7, 11, 2}},
    {"dim", {3, 6}},
    {"dim7", {3, 6, 9}},
    {"dim9", {3, 6, 9, 2}},
    {"dim11", {3, 6, 9, 2, 5}},
    {"ø", {3, 6, 10}},
    {"aug", {4, 8}},
    {"aug7", {4, 8, 10}},
    {"aug9", {4, 8, 10, 2}},
    {"aug11", {4, 8, 10, 2, 5}},
    {"aug13", {4, 8, 10, 2, 5, 9}},
    {"augMaj7", {4, 8, 11}},
    {"augMaj9", {4, 8, 11, 2}},
    {"augMaj11", {4, 8, 11, 2, 5}},
    {"augMaj13", {4, 8, 11, 2, 5, 9}},
    {"6", {4, 7, 9}},
    {"m6", {3, 7, 9}},

    // Added chords:
    {"sus2♯9", {2, 7, 2}},  // Suspended 2 with sharp 9
    {"sus4♯9", {5, 7, 2}},  // Suspended 4 with sharp 9
    {"7♭5", {4, 7, 10, 6}},  // 7 with flat 5
    {"7♯5", {4, 7, 10, 8}},  // 7 with sharp 5
    {"7♯9", {4, 7, 10, 2, 8}},  // 7 with sharp 9
    {"maj6", {4, 7, 9}},  // Major sixth
    {"mMaj7♯5", {3, 7, 11, 6}},  // Minor major 7 with sharp 5
    {"m7♭5", {3, 7, 10, 6}},  // Half-diminished minor 7
    {"mMaj7♯11", {3, 7, 11, 6, 10}},  // Minor major 7 with sharp 11
    {"maj7♯11", {4, 7, 11, 6}},  // Major 7 with sharp 11
    {"6/9", {4, 7, 9, 2}},  // 6/9 chord
    {"maj7♯9", {4, 7, 11, 2, 8}},  // Major 7 with sharp 9
    {"dimMaj7", {3, 6, 11}},  // Diminished major 7
};

