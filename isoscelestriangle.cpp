// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Function bodies of class that defines a isosceles triangle
#include "stdafx.h"

// Constructor that is the list of transformations, the color, the angle of the top vertex
// The base of the triangle is centered at the origin,
// the height  is 1

IsoscelesTriangle::IsoscelesTriangle(vector<Transformation*> transformations, Color color, GLdouble angle) :
	ConvexPolygon(transformations, color, 3)
{
	GLdouble theta = angle * pi / 180; //converting angle to radiants
	vertices[0] = { 0, 1 };
	vertices[1] = { tan(theta / 2), 0 };
	vertices[2] = { -tan(theta / 2), 0 };
}