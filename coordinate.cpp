#include "coordinate.h"

#include <iostream>
#include <string>

using namespace std;

Coordinate::Coordinate() {

  x = 0;
  y = 0;
  z = 0;

  return;
}

Coordinate::Coordinate(int initX, int initY, int initZ) {

  x = initX;
  y = initY;
  z = initZ;

  return;
}

Coordinate::Coordinate(const Coordinate &other) {

//  cout << "coordinate copy constructor called" << endl;

  x = other.x;
  y = other.y;
  z = other.z;

  return;
}

void Coordinate::setX(int newX) {

  x = newX;

  return;
}

void Coordinate::setY(int newY) {

  y = newY;

  return;
}

void Coordinate::setZ(int newZ) {

  z = newZ;

  return;
}

int Coordinate::getX() {
  

  return x;
}

int Coordinate::getY() {

  return y;
}

int Coordinate::getZ() {

  return z;
}

void Coordinate::sayCoordinate() {

  cout << '[' << getX() << ", "
       << getY() << ", " << getZ() << "]" << endl;

  return;
}
