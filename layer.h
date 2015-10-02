#ifndef LAYER_H
#define LAYER_H

#include "coordinate.h"

class Layer {
public:

  //generally required
  Layer(); //default constructor
  Layer(Piece<Face>, Piece<Edge>[4], Piece<Corner>[4], Coordinate); //constructor
  Layer(const Face&); //copy constructor

  //accessor
//  int getFaceColor();

  //printer
//  void sayFaceColor();
//  void sayCoordinate();

private:

  //private members
  Color faceColor;
  Coordinate faceCoordinate;
};

#endif
