#pragma once
#include<stdio.h>
#define HANG 3
#define LIE  3
#include<time.h>
void InitBoard(char board[HANG][LIE], int hang, int lie);//函数声明
void DispalyBoard(char board[HANG][LIE], int hang, int lie);//声明
void PlayerMove(char board[HANG][LIE], int hang, int lie);//玩家下棋
void ComputerMove(char board[HANG][LIE],int hang,int lie);//电脑下棋
char Winer(char board[HANG][LIE],int hang,int lie);  //判断输赢

char Isfull(char board[HANG][LIE], int hang, int lie);

