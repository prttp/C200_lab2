#include "Shape.h"
Shape::Shape(Color color, unsigned int Num) {
	m_col = color;
	m_NumOfCorn = Num;
};
Shape::Shape() {
	m_col = WHITE;
	m_NumOfCorn = 0;
};
/*Shape::Shape(const Rect& r) {
	m_col = r.m_col;
	m_NumOfCorn = 4;
};*/
Shape::~Shape() { std::cout << "Now I am in Shape's destructor!" << std::endl; };
Rect::Rect(Color color, double left, double right, double top, double bottom)
	:Shape(color, 4)
{
	m_left = left;
	m_right = right;
	m_top = top;
	m_bottom = bottom;
	MakeOK();
};
Rect::Rect()
	:Shape(WHITE, 4)
{
	m_left = 0;
	m_right = 1;
	m_top = 1;
	m_bottom = 0;
};
Rect::~Rect() { std::cout << "Now I am in Rect's destructor!" << std::endl; };
void Rect::MakeOK() {
	int buff = 0;
	if (m_left > m_right) { buff = m_left; m_left = m_right; m_right = buff; };
	if (m_bottom > m_top) { buff = m_bottom; m_bottom = m_top; m_top = buff; };
};

Circle::Circle(Color color, double rad)
	:Shape(color, 0)
{
	m_rad = rad;
};
Circle::Circle(const Rect& r)
	:Shape(r.m_col, 0)
{
	m_rad = r.m_left;
};
Circle::~Circle() { std::cout << "Now I am in Circle's destructor!" << std::endl;  };
Circle::Circle()
	:Shape(WHITE, 0)
{
	m_rad = 1;
};
void Rect::Inflate(int x) {
	m_left -= x;
	m_right += x;
	m_top += x;
	m_bottom -= x;
	MakeOK();
};
void Circle::Inflate(int x) {
	m_rad += x;
};