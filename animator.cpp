// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016

// Class definition for the animator
#include "stdafx.h"

 Scene scene;

//Animator::Animator(Scene scene, GLboolean isRunning, GLint currentStep)
Animator::Animator(string sceneFile)
{
	this->sceneFile = sceneFile;
	
	Parser parser(sceneFile);
	scene = parser.parseScene();
		
	//scene.createWindow();
}

void Animator::createWindow() {
	scene.createWindow();
}
void Animator::draw() {	
		scene.draw(currentStep);
		// Call the SwapBuffers
		glutSwapBuffers();
			
	//glutPostRedisplay();
}


void Animator::nextStep()
{
	if (isRunning) {
		//this->draw();
		currentStep++;
		draw();	
	}
}

// Clicking ‘s’ starts the animation
// Clicking ‘p’ pauses the animation
// Clicking ‘r’ resets the animation
void Animator::keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 's': /* s key starts the animation */
	case 'S':
		isRunning = true;
		draw();
		//glutIdleFunc(draw);
		break;
	case 'p': /* p key pauses the animation */
	case 'P':
		isRunning = false;
		//glutIdleFunc(NULL);
		break;
	case 'r': /* r key resets the animation */
	case 'R':
		isRunning = false;
		currentStep = 0;
		//glutIdleFunc(NULL);
		
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


