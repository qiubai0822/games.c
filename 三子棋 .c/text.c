
#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"



void  menu()
{
	printf("############################\n");
	printf("######���������ѡ��########\n");
	printf("###1.��ʼ��Ϸ  2.�˳���Ϸ###\n");
	printf("############################\n");
	printf("############################\n");
	printf("############################\n");

}

void game() {

	char board[HANG][LIE] = { 0 };//������������Ϣ
	char ret;
	InitBoard(board, HANG, LIE);//��ʼ������

	DispalyBoard(board, HANG, LIE);//��ӡ����
                                      //����

	printf("����ҿ�ʼ����");
	printf("������������꣬����Ҫ���ڣ�1,2����������ӣ����롮1�������ո񡯣���2��ȷ���󰴻س�");

	while (1)
	{
        PlayerMove(board,HANG,LIE);//�������
		DispalyBoard(board, HANG, LIE);//��ӡ����
        Winer(board, HANG, LIE);  //�ж���Ӯ	
		ret = Winer(board, HANG, LIE);
		if (ret != 'j') {
			break;
		}

        ComputerMove(board, HANG, LIE);//��������
		DispalyBoard(board, HANG, LIE);//��ӡ����
		ret = Winer(board, HANG, LIE);
		if (ret != 'j') {
			break;
		}
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == 'p')
         printf("ƽ��\n");

		

		
	
}








int main() {


	int input;
	

	srand((unsigned int) time(NULL));

	do {
		menu();


		printf("��ѡ��\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����\n");
			break;
		}


	} while (input);
}