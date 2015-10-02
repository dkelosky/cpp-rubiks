#include "center.h"

#include <iostream>
#include <string>

using namespace std;

Center::Center() {

  dFace = Face();

  return;
}

Center::Center(Face initDirect) {

  dFace = initDirect;

  return;
}

Center::Center(const Center &other) {

  dFace = other.dFace;

  return;
}

Face Center::getDFace() {

  return dFace;
}

void Center::sayColor() {

  cout << "Center direct color is: "
       << dFace.getColor() << " - "
       << COLORS[dFace.getColor()] << endl;

  return;
}
