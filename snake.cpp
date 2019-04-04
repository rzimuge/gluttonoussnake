#include "snake.h"

snake::snake()
	:l(2), sp(2)
{
	sp[0].setx(2);
	sp[0].sety(2);
	sp[1].setx(3);
	sp[1].sety(2);
};
void snake::setl(int i)
{
	l = l + i;
}
void snake::setsp(coordinate i)
{
	sp.push_back(i);
}

void snake::body()
{
	for (int i = 0; i <getl() - 1; i++)
	{
		sp[i].setx(sp[i + 1].getx());
		sp[i].sety(sp[i + 1].gety());
	}
}

void snake::reset()
{
	l = 2;
	sp.resize(2);
	sp[0].setx(2);
	sp[0].sety(2);
	sp[1].setx(3);
	sp[1].sety(2);
}

coordinate snake::getsp(int i)
{
	return sp[i];
}
int snake::getl()
{
	return l;
}

snake::~snake()
{
}
