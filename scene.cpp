// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Function bodies of class that defines a scene

#include "stdafx.h"

// Constructor that must be supplied the height and width of the drawing window for the scene

Scene::Scene(string name, GLint height, GLint width)
{
	this->name = name;
	this->height = height;
	this->width = width;
}

// Creates the drawing window for the scene at position 100, 100 with the width and heights supplied to the constructor

void Scene::createWindow()
{
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(width, height);
	glutCreateWindow(name.c_str());
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

// Traverses all the graphic objects in the scene and calls the draw function to draw them

void Scene::draw(GLint currentStep)
{
	for each (auto graphic in graphics)
		graphic->draw(currentStep);
	
}