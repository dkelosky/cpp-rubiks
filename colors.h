#ifndef COLORS_H
#define COLORS_H

#include <iostream>
#include <string>

using namespace std;

enum Color {
  NONE, WHITE, RED, BLUE, GREEN, YELLOW, ORANGE
};

const string COLORS[] = {
  "None",
  "White",
  "Red",
  "Blue",
  "Green",
  "Yellow",
  "Orange"
};

#define IND_WHITE   'W'
#define IND_RED     'R'
#define IND_BLUE    'B'
#define IND_GREEN   'G'
#define IND_YELLOW  'Y'
#define IND_ORANGE  'O'

#endif
