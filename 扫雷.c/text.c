
#include"game.h"
void emun()
{
	printf("******************************\n");
	printf("*******���������ѡ��*********\n");
	printf("****1.��ʼ��Ϸ**2.�˳���Ϸ****\n");
	printf("******************************\n");
	printf("******************************\n");
	printf("******************************\n");
	printf("******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = {0};
	InitBoard(mine, ROWS, COLS, '0');//��ʼ��
	InitBoard(show, ROWS, COLS, '*');//��ʼ��
	
	DispalyBoard(show, ROW, COL);//��ӡ����
	Setmine(mine,ROW, COL);//����
	//DispalyBoard(mine, ROW, COL);//��ӡ����
	
	PaiLei(mine, show, ROW, COL);	//ɨ��						  
 //����
}
void text()
{       int input;
srand((unsigned int)time(NULL)); 
        
	do {
		emun();
		printf("���������ѡ��>>\n");
		scanf_s("%d", &input);
       

		if (input == 1)
		{
			game();
		
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ");
            break;
		}
			

		else
			printf("�����������������\n");


	} while (input);
	
	
}


int main()
{   
	text();



	return 0;
}