// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Function bodies for class defining scaling transformation

#include "stdafx.h"

// Constructor to create a scaling object given the scale favtors

Scaling::Scaling(GLdouble x, GLdouble y, GLdouble stepStart, GLdouble stepEnd)
{
	this->x = x;
	this->y = y;
	this->stepStart = stepStart;
	this->stepEnd = stepEnd;
}

void Scaling::transform(Transformable* transformable, GLint currentStep) const
{
	//GLint currentStep = Animator::getCurrent();
	GLdouble x2 = 0;
	GLdouble y2 = 0;

	if ((currentStep >= stepStart) && (currentStep <= stepEnd)) {
		//if current step is greater than starting step and less than ending step calculate transformation
		x2 = pow(x, currentStep);
		y2 = pow(y, currentStep);
	}

	transformable->scale(x2, y2);
	//glutPostRedisplay();
}