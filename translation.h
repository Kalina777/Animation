// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Class definition for translation class

class Translation : public Transformation
{
public:
	Translation(GLdouble x, GLdouble y, GLdouble stepStart, GLdouble stepEnd);
	//void transform(Transformable* transformable) const override { transformable->translate(x, y); }
	void transform(Transformable* transformable, GLint currentStep) const;
private:
	GLdouble x, y;
	GLdouble stepStart, stepEnd;
	GLint currentStep;
};

