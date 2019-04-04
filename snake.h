#pragma once
#include <vector>
#include "coordinate.h"
using namespace std;
class snake
{
public:
	snake();
	void setl(int i);//蛇加长
	void setsp(coordinate i);//蛇加长
	void body();//蛇身移动
	void reset();//重置
	coordinate getsp(int i);
	int getl();
	~snake();
protected:
	int l;
	vector<coordinate> sp;
};

