/**
 * This can't be included as part of the g++ compile because its
 * included in the header file!!!
 *
 * Also note that this is included directly as part of the header
 * file otherwise you get odd errors at compile time.  This
 * is something special about templated classes.
 */

#include <iostream>
#include <string>

using namespace std;

template<class DataType>
Piece<DataType>::Piece() {

  pieceCoordinate = Coordinate();
  piece = DataType();

  return;
}

template<class DataType>
Piece<DataType>::Piece(DataType initPiece, Coordinate initCoordinate) {

  piece = initPiece;
  pieceCoordinate = initCoordinate;

  return;
}

template<class DataType>
Piece<DataType>::Piece(const Piece &other) {

  piece = other.piece;
  pieceCoordinate = other.pieceCoordinate;

  return;
}

template<class DataType>
DataType Piece<DataType>::getPiece() {

  return piece;
}

template<class DataType>
void Piece<DataType>::sayCoordinate() {

  cout << "piece: ";

  pieceCoordinate.sayCoordinate();

  return;
}
