#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main()
{
	int i, j;
	int x = 5;
	int y = 10;
	char input;
	int target_x = 5;
	int target_y = 5;

	int isFired = 0;
	int isKilled = 0;

	while (1)
	{
		system("cls");

		//���û���а��ӣ�����ʾ����
		if (isKilled == 0)
		{
			for (i = 0; i < target_y; ++i)
			{
				printf("\n");
			}
			for (i = 0; i < target_x; ++i)
			{
				printf(" ");
			}

			printf("+\n");

		}

		if (isFired == 0)
		{
			for (i = 0; i < y; ++i)
			{
				printf("\n");
			}
		}
		else//�������������
		{
			for (i = 0; i < y; ++i)
			{
				for (j = 0; j < x; ++j)
				{
					printf(" ");
				}
				printf("  |\n");
			}

			if (x + 2 == target_x)
			{
				isKilled = 1;
			}

			isFired = 0;
		}
		for (j = 0; j < x; ++j)
		{
			printf(" ");
		}
		printf("  *\n");
		for (i = 0; i < x; ++i)
		{
			printf(" ");
		}
		printf("*****\n");
		for (i = 0; i < x; ++i)
		{
			printf(" ");
		}
		printf(" * *\n");

		// 		scanf("%c", &input);���س�*�Ż��ƶ�
		input = getch();//ʵʱ�ƶ�

		//�ɻ����������ƶ�
		if (input == 's')
		{
			y++;
		}
		if (input == 'w')
		{
			y--;
		}
		if (input == 'a')
		{
			x--;
		}
		if (input == 'd')
		{
			x++;
		}

		//���ո����
		if (input == ' ')
		{
			isFired = 1;
		}

	}

	//system("pause");
}