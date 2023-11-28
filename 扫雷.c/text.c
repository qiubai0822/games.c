
#include"game.h"
void emun()
{
	printf("******************************\n");
	printf("*******请输入你的选择*********\n");
	printf("****1.开始游戏**2.退出游戏****\n");
	printf("******************************\n");
	printf("******************************\n");
	printf("******************************\n");
	printf("******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = {0};
	InitBoard(mine, ROWS, COLS, '0');//初始化
	InitBoard(show, ROWS, COLS, '*');//初始化
	
	DispalyBoard(show, ROW, COL);//打印棋盘
	Setmine(mine,ROW, COL);//布雷
	//DispalyBoard(mine, ROW, COL);//打印棋盘
	
	PaiLei(mine, show, ROW, COL);	//扫雷						  
 //排雷
}
void text()
{       int input;
srand((unsigned int)time(NULL)); 
        
	do {
		emun();
		printf("请输入你的选择>>\n");
		scanf_s("%d", &input);
       

		if (input == 1)
		{
			game();
		
		}
		else if (input == 0)
		{
			printf("退出游戏");
            break;
		}
			

		else
			printf("输入错误，请重新输入\n");


	} while (input);
	
	
}


int main()
{   
	text();



	return 0;
}