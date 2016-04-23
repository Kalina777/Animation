// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Class definition for rotation class

class Rotation : public Transformation
{
public:
	Rotation(GLdouble angle, GLint startStep, GLint endStep);
	//void transform(Transformable* transformable) const override { transformable->rotate(angle); }
	void transform(Transformable* transformable, GLint currentStep) const;
	GLdouble angle;
	GLint stepStart, stepEnd;
	GLint currentStep;
};