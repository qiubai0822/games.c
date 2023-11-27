
#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"



void  menu()
{
	printf("############################\n");
	printf("######请输入你的选择########\n");
	printf("###1.开始游戏  2.退出游戏###\n");
	printf("############################\n");
	printf("############################\n");
	printf("############################\n");

}

void game() {

	char board[HANG][LIE] = { 0 };//数组存放棋盘信息
	char ret;
	InitBoard(board, HANG, LIE);//初始化棋盘

	DispalyBoard(board, HANG, LIE);//打印棋盘
                                      //下棋

	printf("请玩家开始下棋");
	printf("请玩家输入坐标，例如要想在（1,2）这个点下子，输入‘1’，‘空格’，‘2’确定后按回车");

	while (1)
	{
        PlayerMove(board,HANG,LIE);//玩家下棋
		DispalyBoard(board, HANG, LIE);//打印棋盘
        Winer(board, HANG, LIE);  //判断输赢	
		ret = Winer(board, HANG, LIE);
		if (ret != 'j') {
			break;
		}

        ComputerMove(board, HANG, LIE);//电脑下棋
		DispalyBoard(board, HANG, LIE);//打印棋盘
		ret = Winer(board, HANG, LIE);
		if (ret != 'j') {
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else if (ret == 'p')
         printf("平局\n");

		

		
	
}








int main() {


	int input;
	

	srand((unsigned int) time(NULL));

	do {
		menu();


		printf("请选择\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("错误\n");
			break;
		}


	} while (input);
}