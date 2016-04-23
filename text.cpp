// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Function bodies of class that defines a text

#include "stdafx.h"
// Constructor that is supplied color, start point, and a string of text

Text::Text(Color color, Point startPoint, string text) : Graphic(color)
{
	this->startPoint = startPoint;
	this->text = text;
}

//draws text
void Text::draw(GLint currentStep)
{
	colorDrawing();
	glRasterPos2d(startPoint.x, startPoint.y); //start point of the text

	//loop to print a text string one character at a time
	for (int i = 0; i < text.length(); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, text[i]);

}
