#include <iostream>
#include <conio.h>
using namespace std;

class Square
{
	double side;
public:
	Square();
	Square(double);
	void print_sqr();
	double setSide(double);
	~Square();
};

Square::Square()
{
	this->side = 0;
}

Square::Square(double side)
{
	this->side = side;
}

Square::~Square()
{
	cout << " End" << endl;
}

void Square::print_sqr()
{
	cout << " Side = " << side << " Square = " << side * side << endl;
}

double Square::setSide(double side)
{
	this->side = side;
	return side;
}

int main()
{
	Square a1;
	Square a2(4);

	a1.print_sqr();
	a2.print_sqr();

	a1.setSide(2);
	a1.print_sqr();
}