#include "base.h"
void gotoxy(int x, int y)
{
	COORD pos;
	pos.X = x - 1;
	pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Show(coordinate m)//打印点
{
	gotoxy(m.getx(), m.gety());
	cout << "O";
}

void ShowGluttonousSnake(GluttonousSnake m)//打印蛇
{
	for (int i = m.getl()-1; i >=0 ; i--)
	{
		Show(m.getsp(i));
	}
}

void wall(int li, int h)//初始化墙壁
{
	for (int i = 0; i < li; i++)//上行
	{
		gotoxy(i, 1);
		cout << "+";
	}
	for (int i = 1; i < h; i++)//左列
	{
		gotoxy(1, i);
		cout << "+";
	}
	for (int i = 1; i < li; i++)//下行
	{
		gotoxy(i, h);
		cout << "+";
	}
	for (int i = 0; i < h; i++)//右列
	{
		gotoxy(li, i);
		cout << "+";
	}
}


