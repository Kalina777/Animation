// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016

// Function bodies for class defining rotation transformation

#include "stdafx.h"

// Constructor to create a rotation object given the rotation angle

Rotation::Rotation(GLdouble angle, GLint stepStart, GLint stepEnd)
{
	this->angle = angle;
	this->stepStart = stepStart;
	this->stepEnd = stepEnd;
}

void Rotation::transform(Transformable* transformable, GLint currentStep) const
{
	//GLint currentStep = Animator::getCurrent();
	GLdouble rotAngle = 0.0;

	if ((currentStep >= stepStart) && (currentStep <= stepEnd)) {
		//if current step is greater than starting step and less than ending step calculate transformation
		rotAngle = angle * currentStep;

	}

	transformable->rotate(rotAngle);
	//glutPostRedisplay();
}