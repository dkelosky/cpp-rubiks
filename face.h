#ifndef FACE_H
#define FACE_H

#include "colors.h"
#include "coordinate.h"

class Face {
public:

	//generally required
	Face(); //default constructor
	Face(Color, Coordinate); //constructor
	Face(const Face&); //copy constructor

	//accessor
	int getColor();

	//printer
	void sayColor();
	void sayCoordinate();

private:

	//private members
	Color color;
	Coordinate coordinate;
};

#endif
