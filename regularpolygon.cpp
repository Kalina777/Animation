// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Function bodies of class that defines a regular polygon

#include "stdafx.h"

// Constructor that is supplied a list of transformations, color, number of sides
// The center is placed at the origin, and the radius is 1

RegularPolygon::RegularPolygon(vector<Transformation*> transformations, Color color, GLint sides) :
	ConvexPolygon(transformations, color, sides)
{
	GLdouble angle = 0.; //initial angle is 0
	GLdouble angleIncr = 2 * pi / sides; //angle increment
	for (int i = 0; i < sides; i++) {
		angle += angleIncr;
		vertices[i] = { 1 * cos(angle), 1 * sin(angle) };

	}


}