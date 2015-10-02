#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include "colors.h"
#include "piece.h"
#include "center.h"
#include "edge.h"
#include "corner.h"

#define NUM_OF_EDGES 8
#define NUM_OF_CENTERS 6

using namespace std;

static void initCenters(Piece<Center>[NUM_OF_CENTERS]);
static void printCenters(Piece<Center>[NUM_OF_CENTERS], bool);

static void initEdges(Piece<Edge>[NUM_OF_EDGES]);
static void printEdges(Piece<Edge>[NUM_OF_EDGES], bool);

static bool openFiles(ifstream&, string, ofstream&, string);
static void closeFiles(ifstream&, ofstream&);

static bool buildCube(ifstream&);

static Color getNextColor(ifstream&);

int main() {

	ifstream inFile;
	ofstream outFile;

	bool shouldPrintCenters = false;
	bool shouldPrintEdges = false;

	bool filesOpen = false;

	Piece<Center> center[NUM_OF_CENTERS] = {};
	Piece<Edge> edge[NUM_OF_EDGES] = {};

	//open files
	filesOpen = openFiles(
		inFile, "input.txt",
		outFile, "output.txt"
		);

	//exit if open failure
	if (!filesOpen)
		return -1;

	//build the cube
	if (!buildCube(inFile))
		return -1;

	//initialize centers
	initCenters(center);
	printCenters(center, shouldPrintCenters);

	//initialize edges
	initEdges(edge);
	printEdges(edge, shouldPrintEdges);

	//close files
	closeFiles(inFile, outFile);

	return 0;
}

static bool buildCube(ifstream &inFile) {

	Color color = NONE;

	color = getNextColor(inFile);

	return true;
}

static Color getNextColor(ifstream &inFile) {

	char inChar;

	int i = 0;

	while (inFile.get(inChar)) {

		switch (inChar) {

			case IND_WHITE:
				cout << "white: " << inChar << endl;
				break;

			case IND_RED:
				cout << "red: " << inChar << endl;
				break;

			case IND_BLUE:
				cout << "blue: " << inChar << endl;
				break;

			case IND_GREEN:
				cout << "green: " << inChar << endl;
				break;

			case IND_YELLOW:
				cout << "yellow: " << inChar << endl;
				break;

			case IND_ORANGE:
				cout << "orange: " << inChar << endl;
				break;

			default:
				cout << "default: " << inChar << endl;
				break;
		}
	}

	return NONE;
}

static bool openFiles(
	ifstream &inFile, string inFileName,
	ofstream &outFile, string outFileName) {

	inFile.open("input.txt");

	if (!inFile.is_open())
		return false;

	outFile.open("output.txt");

	if (!outFile.is_open())
		return false;

	return true;

}

static void closeFiles(ifstream &inFile, ofstream &outFile) {

	//close input file
	if (inFile.is_open())
		inFile.close();

	//close output file
	if (outFile.is_open())
		outFile.close();

	return;

}

static void initCenters(Piece<Center> center[NUM_OF_CENTERS]) {

	int i = 0;

	center[i++] =
		Piece<Center>(
			Face(
				BLUE,
				Coordinate(0, 1, 0)
			),
			Coordinate(0, 1, 0)
		);

	center[i++] =
		Piece<Center>(
			Face(
				YELLOW,
				Coordinate(0, 0, -1)
			),
			Coordinate(0, 0, -1)
		);

	center[i++] =
		Piece<Center>(
			Face(
				GREEN,
				Coordinate(0, -1, 0)
			),
			Coordinate(0, -1, 0)
		);

	center[i++] =
		Piece<Center>(
			Face(
				WHITE,
				Coordinate(0, 0, 1)
			),
			Coordinate(0, 0, 1)
		);

	center[i++] =
		Piece<Center>(
			Face(
				ORANGE,
				Coordinate(-1, 0, 0)
			),
			Coordinate(-1, 0, 0)
		);

	center[i++] =
		Piece<Center>(
			Face(
				RED,
				Coordinate(1, 0, 0)
			),
			Coordinate(1, 0, 0)
		);

	return;
}

static void printCenters(
	Piece<Center> center[NUM_OF_CENTERS],
	bool shouldPrintCenters
	) {

	if (shouldPrintCenters) {

		for (int i = 0; i < NUM_OF_CENTERS; i++) {

			cout << endl;
			cout << "vvvvvvvv" << endl;
			center[i].getPiece().sayColor();
			center[i].sayCoordinate();
			center[i].getPiece().getDFace().sayCoordinate();
			cout << "^^^^^^^^" << endl;
		}
	}

	return;
}


static void initEdges(Piece<Edge> edge[NUM_OF_EDGES]) {

	int i = 0;

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					WHITE,
					Coordinate(0, 0, 1)
				),
				Face(
					BLUE,
					Coordinate(0, 1, 0)
				)
			),
			Coordinate(0, 1, 1)
		);

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					BLUE,
					Coordinate(0, 1, 0)
				),
				Face(
					YELLOW,
					Coordinate(0, 0, -1)
				)
			),
			Coordinate(0, 1, -1)
		);

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					YELLOW,
					Coordinate(0, 0, -1)
				),
				Face(
					GREEN,
					Coordinate(0, -1, 0)
				)
			),
			Coordinate(0, -1, -1)
		);

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					GREEN,
					Coordinate(0, -1, 0)
				),
				Face(
					WHITE,
					Coordinate(0, 0, 1)
				)
			),
			Coordinate(0, -1, 1)
		);

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					WHITE,
					Coordinate(0, 0, 1)
				),
				Face(
					ORANGE,
					Coordinate(-1, 0, 0)
				)
			),
			Coordinate(-1, 0, 1)
		);

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					ORANGE,
					Coordinate(-1, 0, 0)
				),
				Face(
					YELLOW,
					Coordinate(0, 0, -1)
				)
			),
			Coordinate(-1, 0, -1)
		);

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					YELLOW,
					Coordinate(0, 0, -1)
				),
				Face(
					RED,
					Coordinate(1, 0, 0)
				)
			),
			Coordinate(1, 0, -1)
		);

	edge[i++] =
		Piece<Edge>(
			Edge(
				Face(
					RED,
					Coordinate(1, 0, 0)
				),
				Face(
					WHITE,
					Coordinate(0, 0, 1)
				)
			),
			Coordinate(1, 0, 1)
		);

	return;
}

static void printEdges(
	Piece<Edge> edge[NUM_OF_EDGES],
	bool shouldPrintEdges
	) {

	if (shouldPrintEdges) {

		for (int i = 0; i < NUM_OF_EDGES; i++) {

			cout << endl;
			cout << "vvvvvvvv" << endl;
			edge[i].getPiece().sayColor();
			edge[i].sayCoordinate();
			edge[i].getPiece().getDFace().sayCoordinate();
			edge[i].getPiece().getIFace().sayCoordinate();
			cout << "^^^^^^^^" << endl;
		}

	}

	return;
}
