#pragma once
#include <iostream>
#include <vector>
#include "coordinate.h"
#include "snake.h"
using namespace std;
class GluttonousSnake 
:public snake
{
public:
	GluttonousSnake();//初始化
	int Gluttonous(coordinate m);//蛇加长
	void move(char m);//蛇移动
	void eatmove(char m);//蛇吃饭时移动
	~GluttonousSnake();
};

