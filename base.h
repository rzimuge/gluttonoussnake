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
#include<thread>
#define sot 15
#define L 101
#define H 50
using namespace std;

extern char i, p, Temp;
extern bool y ;
extern int sop , M , N ;
extern coordinate t[sot];
extern GluttonousSnake q;
extern snake *e;

void gotoxy(int x, int y);
void Show(coordinate m);
void ShowGluttonousSnake(GluttonousSnake m);
void wall(int m,int n);
void showWall(int x, int y);
void clearGluttonousSnake(GluttonousSnake m);//Çå³ýÉß
void clear(coordinate m);//Çå³þµã
void Get();
void run(char p);
bool  judge();

