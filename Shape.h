#pragma once
#include <iostream>
enum Color { RED, GREEN, BLUE, CYAN, MAGENTA, YELLOW, WHITE };
class Shape
{
	
protected:
	Color m_col;
	unsigned int m_NumOfCorn;
public:
	Shape(Color color, unsigned int Num);
	Shape();
	//Shape(const Rect& r);
	virtual ~Shape();
	void WhereAmI() { std::cout << "Now I am in class Shape" << std::endl; };
	virtual void WhereAmIVirtual() { std::cout << "Now I am in class Shape" << std::endl; };
	virtual void Inflate(int x) = 0;
};
class Rect:public Shape
{
	double m_left, m_right, m_top, m_bottom;

public:
	Rect(Color color, double left, double right, double top, double bottom);
	Rect();
	virtual ~Rect();
	void MakeOK();
	void WhereAmI() { std::cout << "Now I am in class Rect" << std::endl; };
	virtual void WhereAmIVirtual() { std::cout << "Now I am in class Rect" << std::endl; };
	friend class Circle;
	virtual void Inflate(int x);
	
};
class Circle:public Shape
{
	double m_rad;
public:
	Circle(Color color, double rad);
	Circle(const Rect& r);
	Circle();
	virtual ~Circle();
	void WhereAmI() { std::cout << "Now I am in class Circle" << std::endl; };
	virtual void WhereAmIVirtual() { std::cout << "Now I am in class Circle" << std::endl; };
	virtual void Inflate(int x);
};