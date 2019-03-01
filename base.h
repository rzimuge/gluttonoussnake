#pragma once
#include <iostream>
#include <windows.h>
#include<time.h>
#include<vector>
#include  <stdlib.h>    
#include "coordinate.h"
#include "snake.h"
#include "GluttonousSnake.h"
#include <stdlib.h>
#include <conio.h>
#include<windows.h>
#define L 101
#define H 50
using namespace std;
void gotoxy(int x, int y);
void Show(coordinate m);
void ShowGluttonousSnake(GluttonousSnake m);
void wall(int m,int n);
