#include"game.h"
void InitBoard(char board[HANG][LIE], int hang, int lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DispalyBoard(char board[HANG][LIE], int hang, int lie)
{
	int i = 0;
	
	for (i = 0; i < hang; i++)
	{    int j = 0;
		for (j = 0; j < lie; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < lie-1)
				printf("|");
			

		}
		printf("\n");


		if (i < hang - 1) {

			for (j = 0; j < lie; j++)
			{
				printf("---");
				if (j < lie - 1)
				{
					printf("|");
				}

			}




			printf("\n");


		}
	}

}
void PlayerMove(char board[HANG][LIE], int hang, int lie)
{
	int x=0;
	int y=0;
	printf("玩家走\n请玩家输入坐标");
	while(1)
	{
	scanf_s("%d%d",&x,&y);
	if ((x>=1&&x <= LIE) &&( y>=1&&y <= HANG)) 
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("该坐标已被占用");
		}

	}
	else
	 {
		printf("你的输入不合法，请重新输入");
	 }
}



}


void ComputerMove(char board[HANG][LIE], int hang, int lie)
{

	int x=0;
	int y=0;
	printf("电脑玩家走\n");
	
	while(1)
	     { 
		x = rand()% hang;
	    y = rand()% lie;
	if (board[x][y] == ' ')
	{
		board[x][y] = '#';
		break; 
	}
         }
	
}
// *玩家赢
//#电脑赢
//p 平局
// j 继续
char Isfull(char board[HANG][LIE], int hang, int lie)
{
	int x;

	for (x = 0; x < HANG; x++)
	{
		int j;
		for (j = 0; j < LIE; j++)
		{
			if (board[x][j] != ' ')
				return 0;
		}
	}
	return 1;
}

char Winer(char board[HANG][LIE], int hang, int lie)
{
	int x;
	for (x = 0; x < HANG; x++)
	{
		if (board[0][x] == board[1][x] && board[1][x] == board[2][x] && board[0][x] != ' ')
		{
			return board[0][x];
		}
	}
	for (x = 0; x < HANG; x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ')
		{
			return board[x][0];
		}
	}
	
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') || (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' '))
		return board[1][1];
	if (1 == Isfull(board, HANG, LIE))
		return 'p';
	else
		return 'j';
}
