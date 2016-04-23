// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Base class for all convex polygon classes
class ConvexPolygon : public Polygon
{
public:
	const GLdouble pi = 3.14;
	GLint currentStep;
	void draw(GLint currentStep) override;
	void translate(GLdouble translateX, GLdouble translateY) override
	{
		glTranslated(translateX, translateY, 0);

		/*GLdouble translator[16] =
		{
			1.0, 0.0, 0.0, 0.0,
			0.0, 1.0, 0.0, 0.0,
			0.0, 0.0, 1.0, 0.0,
			translateX, translateY, 0.0, 1.0
		};

		glMultMatrixd(translator);*/
	}

	void rotate(GLdouble angle)	override {
		glRotated(angle, 0.0, 0.0, 1.0);

		/*GLdouble translator[16] =
		{
			cos(angle * pi / 180.0), sin(angle * pi / 180.0), 0.0, 0.0,
			-sin(angle * pi / 180.0), cos(angle * pi / 180.0), 0.0, 0.0,
			0.0, 0.0, 1.0, 0.0,
			0.0, 0.0, 0.0, 1.0
		};

		glMultMatrixd(translator);*/
	}

	void scale(GLdouble scaleX, GLdouble scaleY) override {
		glScaled(scaleX, scaleY, 1.0);

		/*GLdouble translator[16] =
		{
			scaleX, 0.0, 0.0, 0.0,
			0.0, scaleY, 0.0, 0.0,
			0.0, 0.0, 1.0, 0.0,
			0.0, 0.0, 0.0, 1.0
		};

		glMultMatrixd(translator);*/
	}
protected:
	ConvexPolygon(vector<Transformation*> transformations, Color color, GLint vertexCount) :
		Polygon(transformations, color, vertexCount) {}

};

