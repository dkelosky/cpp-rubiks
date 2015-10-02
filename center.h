#ifndef CENTER_H
#define CENTER_H

#include "face.h"
#include "pieceBase.h"

class Center : public PieceBase {
public:

  //generally required
  Center(); //default constructor
  Center(Face); //constructor
  Center(const Center&); //copy constructor

  //accessor
  Face getDFace(); //direct

  //printer
  void sayColor();

private:

  //private members
  Face dFace;
};

#endif
