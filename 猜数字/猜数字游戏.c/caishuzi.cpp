#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void meau() {
	printf("****************************************\n");
	printf("******�������Ƿ�׼���ÿ�ʼ��Ϸ��********\n");
	printf("***********1.��ʼ     0.�˳�************\n");
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
		printf("��������µ�����");
		scanf_s("%d", &a);
			if (a > rte)
			{
				printf("�´���\n");
			}
		    
		else if (a < rte)
		{
			printf("��С��\n");
			
		}
		else
		{
			printf("�¶���\n\n\n");
			break;
			
		}

	}
	

}



int main() {
	int input = 0;
srand((unsigned int)time(NULL));
	do {
		meau();
		printf_s("����ѡ��ʼ�����˳���1/0��");
		scanf_s("%d", &input);
		switch (input)
		
		{
		case 1:
			game();
				break;

		case  0:
			printf("�����˳���Ϸ");
			break;

		default:
			printf("\n�����������������\n");
			break;
		}

	} while (input);

}