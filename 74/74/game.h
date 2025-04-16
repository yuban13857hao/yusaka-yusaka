#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define X 3
#define Y 3

//初始化棋盘
void cushihua(char qipan[X][Y], int a, int b);

//打印棋盘
void dayin(char qipan[X][Y], int a, int b);

//玩家下棋
void playwanjai(char qipan[X][Y], int a, int b);

//入机下棋
//随便找一个没下棋的位置下棋
void playruji(char qipan[X][Y], int a, int b);

//结束代码
//1.玩家赢'*'2电脑赢'#'3平局'Q'4继续'C'
char jiesu(char qipan[X][Y], int a, int b);