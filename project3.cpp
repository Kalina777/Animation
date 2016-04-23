// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016

// Project 3 main source file

#include "stdafx.h"

// Global variable that defines the scene object

//static Scene scene;
static Animator animator;

// Function that is called each time the window is drawn

void draw(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	animator.draw();
	//glutSwapBuffers();
	glFlush();
}

////listens and responds to input from the keyboard
void key(unsigned char key, int x, int y)
{
	animator.keyboard(key, x, y);
}

//timer
void timer(GLint value)
{
	animator.nextStep();
	glutTimerFunc(33, timer, 1);
	//glutPostRedisplay();
}
// Function that is called each time the window is resized

void resizeWindow(GLint newWidth, GLint newHeight)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D((GLdouble)-newWidth / 2, (GLdouble)newWidth / 2, (GLdouble)-newHeight / 2, (GLdouble)newHeight / 2);
	glClear(GL_COLOR_BUFFER_BIT);
}


// The main function of the whole program, which requires the name of the scene definition file as a command line argument
// If no command line argument is supplied the user is prompted to enter the file name
// It calls the parser to parse the scene definition file and add the graphic objects to the scene,
// and then it creates the drawing window and registers the callback function for drawing the window and resizing it

int main(GLint argc, char** argv)
{
	string sceneFile;
	if (argc > 1)
		sceneFile = argv[1];
	else
	{
		cout << "Enter scene file name: ";
		cin >> sceneFile;
	}
	try
	{
		//Parser parser(sceneFile);
		animator = Animator(sceneFile);
	}
	catch (SyntaxError error)
	{
		cout << error.what() << endl;
		system("pause");
		return 1;
	}
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	animator.createWindow();
	glutDisplayFunc(draw);
	glutReshapeFunc(resizeWindow);
	glutKeyboardFunc(key); //keyboard
	glutTimerFunc(33, timer, 1); //timer
	glutMainLoop();
	return 0;
}
