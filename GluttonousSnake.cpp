#include "GluttonousSnake.h"

GluttonousSnake::GluttonousSnake()
	:snake()
{
}

int GluttonousSnake::Gluttonous(coordinate m)
{
		setl(1);
		setsp(m);
	return 0;
}

void GluttonousSnake::move(char m)
{
	switch (m)
	{
	case 'w':
		body();
		sp[l-1].reducey();
		break;
	case 's':
		body();
		sp[l - 1].addy();
		break;
	case 'a':
		body();
		sp[l - 1].reducex();
		break;
	case 'd':
		body();
		sp[l - 1].addx();
		break;
	default:
		break;
	}
}

void GluttonousSnake::eatmove(char m)
{
	switch (m)
	{
	case 'w':
		sp[l - 1].reducey();
		break;
	case 's':
		sp[l - 1].addy();
		break;
	case 'a':
		sp[l - 1].reducex();
		break;
	case 'd':
		sp[l - 1].addx();
		break;
	default:
		break;
	}
}

GluttonousSnake::~GluttonousSnake()
{
}
