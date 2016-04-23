// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// November 15, 2015

// Function bodies of base class for all hollow polygon classes

#include "stdafx.h"

// Draws all hollow polygons

void HollowPolygon::draw(GLint currentStep)
{
	glPushMatrix();
	for each (auto transformation in transformations)
		transformation->transform(this,  currentStep);
	colorDrawing();
	glLineWidth(3);
	glBegin(GL_LINES);
	for (GLint vertex = 0; vertex < vertexCount; vertex++)
	{
		glVertex2d(vertices[vertex].x, vertices[vertex].y);
		GLint nextVertex = (vertex + 1) % vertexCount;
		glVertex2d(vertices[nextVertex].x, vertices[nextVertex].y);
	}
	glEnd();
	glPopMatrix();
}



