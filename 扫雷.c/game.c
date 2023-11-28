#include"game.h"



void InitBoard(char Board[ROWS][COLS], int row, int col, char set)
{
	int i,j;
	for (i = 0; i < ROWS; i++)

	{
		for (j = 0; j <COLS;j++)
		{
			Board[i][j] = set;
		}
	}
		
	
}

void DispalyBoard(char Board[ROWS][COLS], int row, int col)
{
	int x, y;
	for (x = 0;x <= COL ; x++)
	{
		printf("%d ", x);
	}
	printf("\n");
	for (x = 1; x <= ROW; x++)
	{
		printf("%d", x);
		for (y = 1; y <= COL; y++)
		{
			printf(" %c", Board[x][y]);
		}
		printf("\n");
	}
}

void  Setmine(char Board[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = EASY_COUNT; 
	
	while (count)
	{      x = rand() % ROW + 1;
	       y = rand() % COL + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;
		}
	}
}

void  PaiLei(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;

	while(win<ROW*COL-EASY_COUNT)
     {		printf("请输入你要选择的坐标\n");
	         scanf_s("%d%d", &x, &y);
			 DispalyBoard(mine,  x,  y);
			 printf("\n\n\n");
	     if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	      {   
		       if (mine[x][y] == '0')
		        {
		         	int count = Get_count(mine, x, y);
			        show[x][y] = count + '0';
			        DispalyBoard(show, ROW, COL);
					win++;
		         }
	
		        else
		         {
			     printf("很遗憾，你踩雷了\n");
			     DispalyBoard(mine, ROW, COL);

			        break;
		          }
			
	      }

        else
        {
         printf("你的输入不合法，请重新输入！！\n");
         }



	
	   }
	if (win == ROW * COL - EASY_COUNT)
		print("恭喜过关\n");
}
int Get_count(char mine[ROWS][COLS], int x, int y)
	      {
		return mine[x + 1][y]
			+ mine[x - 1][y]
			+ mine[x][y + 1]
			+ mine[x][y - 1]
			+ mine[x + 1][y + 1]
			+ mine[x - 1][y + 1]
			+ mine[x - 1][y - 1]
			+ mine[x + 1][y - 1]
			- 8 * '0';
	      }