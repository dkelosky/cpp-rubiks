#ifndef PIECE_H
#define PIECE_H

#include "coordinate.h"
#include "colors.h"

template<class DataType>
class Piece {
public:

  //generally required
  Piece(); //default constructor
  Piece(DataType, Coordinate); //constructor
  Piece(const Piece&); //copy constructor

  //accessor
  DataType getPiece();

  //printer
  void sayCoordinate();

private:

  //private members
  DataType piece;
  Coordinate pieceCoordinate;
};

#include "piece.cpp"

#endif
