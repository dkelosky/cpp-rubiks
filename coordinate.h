#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate {
  
public:

  //generally required
  Coordinate(); //default constructor
  Coordinate(int, int, int); //constructor
  Coordinate(const Coordinate&); //copy constructor

  //mutator
  void setX(int);
  void setY(int);
  void setZ(int);

  //accessor
  int getX();
  int getY();
  int getZ();

  //printer
  void sayCoordinate();

private:

  //private members
  int x; //right is positive
  int y; //up is postive
  int z; //front is positive
};

#endif
