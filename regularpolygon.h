// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Class definition for regular polygon class
class RegularPolygon : public ConvexPolygon
{
	const GLdouble pi = 3.14;
public:
	RegularPolygon(vector<Transformation*> transformations, Color color, GLint sides);
};

