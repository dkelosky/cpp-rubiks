#include "face.h"

#include <iostream>
#include <string>

using namespace std;

Face::Face() {

	color = NONE;
	coordinate = Coordinate();

	return;
}

Face::Face(Color initColor, Coordinate initCoordinate) {

	color = initColor;
	coordinate = initCoordinate;

	return;
}

Face::Face(const Face &other) {

	color = other.color;
	coordinate = other.coordinate;

	return;
}

int Face::getColor() {

	return color;
}

void Face::sayColor() {

	cout << "Face color: " << getColor() << " - "
	     << COLORS[getColor()] << endl;

	return;
}

void Face::sayCoordinate() {

	cout << "face: ";

	coordinate.sayCoordinate();

	return;
}
