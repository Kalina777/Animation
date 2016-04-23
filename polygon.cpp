// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// November 15, 2015

// Function bodies of base class for all polygon classes

#include "stdafx.h"

// Constructor that is supplied color and number of vertices

Polygon::Polygon(vector<Transformation*> transformations, Color color, GLint vertexCount) : Graphic(color)
{
	this->transformations = transformations;
	this->vertexCount = vertexCount;
	vertices = new Point[vertexCount];
	
}



