// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016

// Class definition for the animator

class Animator
{
public:
	Animator() {}
	Animator(string sceneName);
	void draw();
	void nextStep();
	void keyboard(unsigned char key, int x, int y);
	void createWindow();
private:
	string sceneFile;
	GLboolean isRunning = false;
	GLint currentStep = 0;

};