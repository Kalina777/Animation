// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// November 15, 2015

// Base class for all hollow polygon classes

class HollowPolygon : public Polygon
{
public:
	GLint currentStep;
	void draw(GLint currentStep) override;
	void translate(GLdouble translateX, GLdouble translateY) override
	{
		glTranslated(translateX, translateY, 0);
	}
	void rotate(GLdouble angle)	override { glRotated(angle, 0.0, 0.0, 1.0); }
	void scale(GLdouble scaleX, GLdouble scaleY) override { glScaled(scaleX, scaleY, 1.0); }
protected:
	HollowPolygon(vector<Transformation*> transformations, Color color, GLint vertexCount) :
		Polygon(transformations, color, vertexCount) {}

};
