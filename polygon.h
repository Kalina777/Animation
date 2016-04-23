// CMSC 405 Computer Graphics
// Project 3
// Duane J. Jarc
// November 15, 2015

// Base class for all polygon classes

class Polygon : public Graphic, public Transformable
{
public:
	//void draw(GLint currentStep); //added
protected:
	Polygon(vector<Transformation*> transformations, Color color, GLint vertexCount);
	~Polygon() { delete vertices; }
	vector<Transformation*> transformations;
	GLint vertexCount;
	Point *vertices;
	
};
