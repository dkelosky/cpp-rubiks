#include "edge.h"

#include <iostream>
#include <string>

using namespace std;

Edge::Edge() {

	directFace = Face();
	indirectFace = Face();

	return;
}

Edge::Edge(Face initDirect, Face initIndirect) {

	directFace = initDirect;
	indirectFace = initIndirect;

	return;
}

Edge::Edge(const Edge &other) {

	directFace = other.directFace;
	indirectFace = other.indirectFace;

	return;
}

Face Edge::getDFace() {

	return directFace;
}

Face Edge::getIFace() {

	return indirectFace;
}

void Edge::sayColor() {

	cout << "Edge direct color: "
	     << directFace.getColor() << " - "
			 << COLORS[directFace.getColor()] << endl;

	cout << "Edge indirect color: "
				<< indirectFace.getColor() << " - "
				<< COLORS[indirectFace.getColor()] << endl;

	return;
}
