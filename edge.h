#ifndef EDGE_H
#define EDGE_H

#include "face.h"
#include "pieceBase.h"

class Edge : public PieceBase {
public:

	//generally required
	Edge(); //default constructor
	Edge(Face, Face); //constructor
	Edge(const Edge&); //copy constructor

	//accessor
	Face getDFace(); //direct
	Face getIFace(); //indirect

	//printer
	void sayColor();

private:

	//private members
	Face directFace;
	Face indirectFace;
};

#endif
