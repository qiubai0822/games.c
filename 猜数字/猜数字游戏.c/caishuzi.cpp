#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void meau() {
	printf("****************************************\n");
	printf("******请问您是否准备好开始游戏？********\n");
	printf("***********1.开始     0.退出************\n");
	printf("****************************************\n");
	printf("****************************************\n");
	
}
void game()
{
	int a;
	int rte = 0; 
	
	rte = rand()%100-1; 
	
	//printf("%d\n", rte);
	
	while(1){
		printf("请输入你猜的数字");
		scanf_s("%d", &a);
			if (a > rte)
			{
				printf("猜大了\n");
			}
		    
		else if (a < rte)
		{
			printf("猜小了\n");
			
		}
		else
		{
			printf("猜对了\n\n\n");
			break;
			
		}

	}
	

}



int main() {
	int input = 0;
srand((unsigned int)time(NULL));
	do {
		meau();
		printf_s("请你选择开始还是退出（1/0）");
		scanf_s("%d", &input);
		switch (input)
		
		{
		case 1:
			game();
				break;

		case  0:
			printf("您已退出游戏");
			break;

		default:
			printf("\n输入错误，请重新输入\n");
			break;
		}

	} while (input);

}