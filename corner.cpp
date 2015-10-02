#include "corner.h"

Corner::Corner() {

  dFace = Face(NONE, Coordinate());
  iVFace = Face(NONE, Coordinate());
  iHFace = Face(NONE, Coordinate());

  return;
}

Corner::Corner(Face initDirect, Face initIndirectV, Face initIndirectH) {

  dFace = initDirect;
  iVFace = initIndirectV;
  iHFace = initIndirectH;

  return;
}

Corner::Corner(const Corner &other) {

  dFace = other.dFace;
  iVFace = other.iVFace;
  iHFace = other.iHFace;

  return;
}

Face Corner::getDFace() {

  return dFace;
}

Face Corner::getIVFace() {

  return iVFace;
}

Face Corner::getIHFace() {

  return iHFace;
}

void Corner::sayColor() {

  cout << "Corner direct color is: "
       << dFace.getColor() << " - "
       << COLORS[dFace.getColor()] << endl;

  cout << "Corner indirect verticle color is: "
        << iVFace.getColor() << " - "
        << COLORS[iVFace.getColor()] << endl;

  cout << "Corner indirect horizontal color is: "
        << iHFace.getColor() << " - "
        << COLORS[iHFace.getColor()] << endl;

  return;
}
