#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS  ROW+2
#define COLS  COL+2
#define EASY_COUNT 10
void InitBoard(char Board[ROWS][COLS], int row, int col, char set);
void DispalyBoard(char Board[ROWS][COLS], int row, int col);
void  Setmine(char Board[ROWS][COLS], int row, int col);
void  PaiLei(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);
int Get_count(char mine[ROWS][COLS], int x, int y);