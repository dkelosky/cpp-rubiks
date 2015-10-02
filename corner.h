#ifndef CORNER_H
#define CORNER_H

#include "face.h"
#include "pieceBase.h"

class Corner : public PieceBase {
public:

  //generally required
  Corner(); //default constructor
  Corner(Face, Face, Face); //constructor
  Corner(const Corner&); //copy constructor

  //accessor
  Face getDFace(); //direct
  Face getIVFace(); //indirect verticle
  Face getIHFace(); //indirect horizontal

  //printer
  void sayColor();

private:

  //private members
  Face dFace;
  Face iVFace;
  Face iHFace;
};

#endif
