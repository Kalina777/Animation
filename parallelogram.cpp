// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Function bodies of class that defines a parallelogram
#include "stdafx.h"

// Constructor that is supplied the list of transformations and the color,
// the angle of the lower left vertex.
//The lower left vertex is placed at the origin
// and all sides have length 1
// the top and bottom are parallel to the x-axis

Parallelogram::Parallelogram(vector<Transformation*> transformations, Color color, GLdouble angle) :
	ConvexPolygon(transformations, color, 4)
{
	GLdouble theta = angle * pi / 180; //converting angle to radiants
	vertices[0] = { 0, 0 };
	vertices[1] = { cos(theta), sin(theta) };
	vertices[2] = { 1 + cos(theta), sin(theta) };
	vertices[3] = { 1, 0 };
}