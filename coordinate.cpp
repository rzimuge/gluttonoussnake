#include "coordinate.h"
coordinate::coordinate()
{
}
coordinate::coordinate(unsigned m, unsigned n)
 :x(m), y(n)
{
};

void coordinate::setx(unsigned i)
{
	x = i;
}
unsigned coordinate::getx()
{
	return x;
}
void coordinate::sety(unsigned i)
{
	y = i;
}
unsigned coordinate::gety()
{
	return y;
}

void coordinate::addx()
{
	setx(x + 1);
}
void coordinate::reducex()
{
	setx(x - 1);
}
void coordinate::addy()
{
	sety(y + 1);
}
void coordinate::reducey()
{
	sety(y - 1);
}
void coordinate::print()
{
	cout << "(" << x << "," << y << ")" << endl;
}


coordinate::~coordinate()
{
}
