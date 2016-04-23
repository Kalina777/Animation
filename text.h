// CMSC 405 Computer Graphics
// Project 3
// Olga Shirokova
// April 22, 2016
//IDE - Visual Studio 2015

// Class definition for text class
class Text : public Graphic
{
public:
	Text(Color color, Point startPoint, string string);
	void draw(GLint currentStep);
private:

	Point startPoint;
	string text;

};