// SPDX-License-Identifier: GPL-3.0-only
#pragma once
#include <SFML/System/String.hpp>
#include <vector>
#include <set>

// A simple struct that holds chord info + its global "popularity weight"
struct ChordTemplate {
    sf::String name;
    std::set<unsigned short> intervals; // ascending intervals from root, excluding 0
    int commonality;                    // large = more common chord
};

// Full chord database with "commonality" weights
static const std::vector<ChordTemplate> chord_db = {
    // Common triads/sevenths
    {"maj",    {4, 7},              10},
    {"min",    {3, 7},              10},
    {"sus2",   {2, 7},               8},
    {"sus4",   {5, 7},               8},
    {"dim",    {3, 6},               5},
    {"aug",    {4, 8},               5},
    {"7",      {4, 7, 10},           9},
    {"maj7",   {4, 7, 11},           9},
    {"m7",     {3, 7, 10},           9},
    {"9",      {4, 7, 10, 2},        7},
    {"m9",     {3, 7, 10, 2},        7},
    {"11",     {4, 7, 10, 2, 5},     6},
    {"m11",    {3, 7, 10, 2, 5},     6},
    {"13",     {4, 7, 10, 2, 5, 9},  5},
    {"m13",    {3, 7, 10, 2, 5, 9},  5},

    // Altered chords and add chords
    {"add9",       {4, 7, 2},        6},
    {"maj7add13",  {4, 7, 11, 9},    5},
    {"7♯5",        {4, 7, 10, 8},    5},
    {"7b5",        {4, 7, 10, 6},    5},
    {"7♯9",        {4, 7, 10, 2, 8}, 4},
    {"sus2♯9",     {2, 7, 2},        4},
    {"sus4♯9",     {5, 7, 2},        4},
    {"m7b5",       {3, 7, 10, 6},    4},
    {"dim7",       {3, 6, 9},        4},
    {"mmaj7",      {3, 7, 11},       5},
    {"maj7♯11",    {4, 7, 11, 6},    4},
    {"mmaj7♯11",   {3, 7, 11, 6},    4},
    {"augMaj7",    {4, 8, 11},       4},
    {"maj6",       {4, 7, 9},        6},
    {"m6",         {3, 7, 9},        6},
    {"6/9",        {4, 7, 9, 2},     6},
    {"dimMaj7",    {3, 6, 11},       4},
};
