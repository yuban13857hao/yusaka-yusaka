#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define X 3
#define Y 3

//��ʼ������
void cushihua(char qipan[X][Y], int a, int b);

//��ӡ����
void dayin(char qipan[X][Y], int a, int b);

//�������
void playwanjai(char qipan[X][Y], int a, int b);

//�������
//�����һ��û�����λ������
void playruji(char qipan[X][Y], int a, int b);

//��������
//1.���Ӯ'*'2����Ӯ'#'3ƽ��'Q'4����'C'
char jiesu(char qipan[X][Y], int a, int b);