/*
File Name: Rooms.h
Programming: Deanna Tatum, Jesse A. Hankins, Kyle Meystedt
			Southeast Missouri State University
			CS300-01
Date Last Modified: ??/??/????

Description:
dimensionsRoom is a structure that holds the grid size of a Room.

Room is a class which stores all of the Rooms objects in a vector that grows dynamically, and creates a map of the room 
		displaying its contents and dimension using a two-dimensional vector. 
	Room(): default constructor. *********************may not be in final implementation.
	Room(): explicit constructor. accepts a filename as a string. from the file: assigns roomID, dimensions of room with setSize(), 
		assigns data members of objects in room, places objects in objRoom vector, and then uses setRoom() to create a 
		two-dimensional representation of the room without walls. (doors and windows are in-set)
	setSize(): accepts a dimensionsRoom. sets the value for the size of a Room. returns nothing. 
	getSize(): accepts nothing. returns a dimensionsRoom of the value of size for a Room. 
	getObjects(): accepts nothing. returns the vector objRoom.
	setRoom(): accepts a dimensionsRoom. creates a two-dimensional vector representing a Room, filling each space as blank ('.') or with
		the symbol of the object occupying that space. (doors and windows are in-set). returns nothing. 
	getRoom(): accepts nothing. returns a Rooms mapRoom (the two-dimensional vector representing the room). 
	displayRoom(): accepts nothing. creates and outputs a 2-dimensional vector to graphically display the layout of a Room. returns nothing.
*/

#ifndef ROOM
#define ROOM

#include "Objects.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct dimensionsRoom
{
	int xSize = 0;// height
	int ySize = 0;// width
};

class Room
{
protected:
	string roomID;
	dimensionsRoom size;
	vector <vector <char> > mapRoom;// map of room WITHOUT exterior walls. 
	vector < Object* > objRoom;// container for all objects (represented by pointers) within Room. 

public:
	Room();
	// default constructor. *********************may not be in final implementation.

	Room(string file);
	/* explicit constructor. accepts a filename as a string. from the file: assigns roomID, dimensions of room with setSize(),
	assigns data members of objects in room, places objects in objRoom vector, and then uses setRoom() to create a
		two - dimensional representation of the room without walls. (doors and windows are in - set) */

	string getRoomID(); // UPDATE THE INFORMATION HERE!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

	void setSize(dimensionsRoom & item);
	// accepts a dimensionsRoom. sets the value for the size of a Room. returns nothing. 

	dimensionsRoom getSize() const;
	// accepts nothing. returns a dimensionsRoom of the value of size for a Room. 

	vector < Object* > getObjects() const;
	// accepts nothing. returns the vector objRoom. 

	void setRoom(dimensionsRoom & item);
	/* accepts a dimensionsRoom. creates a two-dimensional vector representing a Room, filling each space as blank ('.') or with
		the symbol of the object occupying that space. (doors and windows are in-set). returns nothing. */

	vector <vector <char> > getRoom() const;
	// accepts nothing. returns a Rooms mapRoom (the two-dimensional vector representing the room). 

	void displayRoom() const;
	// accepts nothing. creates and outputs a 2-dimensional vector to graphically display the layout of a Room. returns nothing. 
};
#endif