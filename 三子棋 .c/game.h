#pragma once
#include<stdio.h>
#define HANG 3
#define LIE  3
#include<time.h>
void InitBoard(char board[HANG][LIE], int hang, int lie);//��������
void DispalyBoard(char board[HANG][LIE], int hang, int lie);//����
void PlayerMove(char board[HANG][LIE], int hang, int lie);//�������
void ComputerMove(char board[HANG][LIE],int hang,int lie);//��������
char Winer(char board[HANG][LIE],int hang,int lie);  //�ж���Ӯ

char Isfull(char board[HANG][LIE], int hang, int lie);

