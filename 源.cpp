#include"base.h"
bool judge();
using namespace std;
char i, p;
coordinate t(rand() % 100, rand() % 50);
GluttonousSnake q;
snake *e = &q;
int main()
{
	bool y = true;
	gotoxy(50, 25);
	cout << "输入Y来开始:" << endl;
	gotoxy(50, 26);
	cout << "按P暂停" << endl;
	gotoxy(62, 25);
	cin >> p;
	if (p== 'Y')
	{
		system("cls");
		while (y==true)
		{
			gotoxy(101, 50);
			wall(101, 50);
			Show(t);
			gotoxy(101, 50);
			q.move(i);
			ShowGluttonousSnake(q);
			Sleep(250);
			if (_kbhit())
			{
				char m;
				m = _getch();
				switch (m)//持续移动(PS:因为使用gentche/getche 得到的字符是动态的使用一次就清空)
				{
				case 'w':
					i = 'w';
					break;
				case 's':
					i = 's';
					break;
				case 'a':
					i = 'a';
					break;
				case 'd':
					i = 'd';
					break;
				case 'p':
					gotoxy(101, 50);
					cout << endl;
					system("PAUSE");
					break;
				}
			}

			if (q.getsp(e->getl() - 1).getx() == t.getx() && q.getsp(e->getl() - 1).gety() == t.gety())
			{
				q.Gluttonous(t);
				t.setx(rand() % 99);
				t.sety(rand() % 48);
				q.eatmove(i);
			}
			y=judge();
			system("cls");
		}
	}
	system("cls");
	gotoxy(L/2, H/2);
	cout << "You are lost!"<< endl;
	return 0;
}

bool  judge()//bool未说明返回真假时,默认返回50
{
	for (unsigned i = 0; i < L; i++)//上行
	{
		if (q.getsp(e->getl() - 1).getx() == i && q.getsp(e->getl() - 1).gety() == 1)
		{
			return false;
		}
	}
	for (unsigned i = 1; i < H; i++)//左列
	{
		if (q.getsp(e->getl() - 1).getx() == 1 && q.getsp(e->getl() - 1).gety() == i)
		{
			return false;
		}
	}
	for (unsigned i = 1; i < L; i++)//下行
	{
		if (q.getsp(e->getl() - 1).getx() == i && q.getsp(e->getl() - 1).gety() == H)
		{
			return false;
		}
	}
	for (unsigned i = 0; i < H; i++)//右列
	{
		if (q.getsp(e->getl() - 1).getx() == L && q.getsp(e->getl() - 1).gety() == i)
		{
			return false;
		}
	}
	for (unsigned i = 0; i < e->getl()-1; i++)//蛇身相咬
	{
		if (q.getsp(e->getl() - 1).getx() == q.getsp(i).getx() && q.getsp(e->getl() - 1).gety() == q.getsp(i).gety())
		{
			return false;
		}
	}
	return true;
}
