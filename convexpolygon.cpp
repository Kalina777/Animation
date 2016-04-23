// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Function bodies of base class for all convex polygon classes
#include "stdafx.h"

// Draws all convex polygons

void ConvexPolygon::draw(GLint currentStep)
{
	glPushMatrix();
	for each (auto transformation in transformations)
		transformation->transform(this, currentStep);
	colorDrawing();
	glBegin(GL_POLYGON);
	for (GLint vertex = 0; vertex < vertexCount; vertex++)
	{
		glVertex2d(vertices[vertex].x, vertices[vertex].y);
		GLint nextVertex = (vertex + 1) % vertexCount;
		glVertex2d(vertices[nextVertex].x, vertices[nextVertex].y);
	}
	glEnd();
	glPopMatrix();
}