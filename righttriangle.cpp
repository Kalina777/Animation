// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Function bodies of class that defines an right triangle 

#include "stdafx.h"

// Constructor that is supplied transformations and color
// Lower left vertex is at the origin and the height and width are 1

RightTriangle::RightTriangle(vector<Transformation*> transformations, Color color) :
	HollowPolygon(transformations, color, 3)
{
	vertices[0] = { 0, 0 };
	vertices[1] = { 1, 0 };
	vertices[2] = { 0, 1 };
}