// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// November 15, 2015

// Function bodies of class that defines a hollow rectangle 

#include "stdafx.h"

// Constructor for rectangle that is supplied transformations and color
// The lower left corner is at the origin and the height and width are 1

Rectangle_::Rectangle_(vector<Transformation*> transformations, Color color)
	: HollowPolygon(transformations, color, 4)
{
	vertices[0] = { 0, 0 };
	vertices[1] = { 1, 0 };
	vertices[2] = { 1, 1 };
	vertices[3] = { 0, 1 };
}