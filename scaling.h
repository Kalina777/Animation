// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// August 1, 2013

// Class definition for scaling class

class Scaling : public Transformation
{
public:
	Scaling(GLdouble x, GLdouble y, GLdouble stepStart, GLdouble stepEnd);
	//void transform(Transformable* transformable) const override { transformable->scale(x, y); }
	void transform(Transformable* transformable, GLint currentStep) const;
private:
	GLdouble x, y;
	GLdouble stepStart, stepEnd;
	GLint currentStep;
};