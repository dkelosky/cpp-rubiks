#ifndef PIECEBASE_H
#define PIECEBASE_H

/**
 * Contains only a pure virtual function without constructors and such.
 * Any classes that inherit this must implement sayColor before being
 * instantiated, otherwise the compiler throws an error.
 */

class PieceBase {
public:

  //printer
  virtual void sayColor() = 0;
};

#endif
