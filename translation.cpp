// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Function bodies for class defining translation transformation

#include "stdafx.h"

// Constructor to create a translation object given the translation distances

Translation::Translation(GLdouble x, GLdouble y, GLdouble stepStart, GLdouble stepEnd)
{
	this->x = x;
	this->y = y;
	this->stepStart = stepStart;
	this->stepEnd = stepEnd;
}

void Translation::transform(Transformable* transformable, GLint currentStep) const
{
	//GLint currentStep = Animator::getCurrent();
	GLdouble x2 = 0;
	GLdouble y2 = 0;

	if ((currentStep >= stepStart) && (currentStep <= stepEnd)) {
		//if current step is greater than starting step and less than ending step calculate transformation
		x2 = x * currentStep;
		y2 = y * currentStep;
	}

	transformable->translate(x2, y2);
	//glutPostRedisplay();
}