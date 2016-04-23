// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Interface that defines a transformation

class Transformation
{
public:
	Transformation() {};
	Transformation(GLint stepStart, GLint stepEnd) {
		this->stepStart = stepStart;
		this->stepEnd = stepEnd;
	}
	virtual void transform(Transformable* transformable, GLint currentStep) const = 0;
	GLint stepStart;
	GLint stepEnd;
	GLint currentStep;
};