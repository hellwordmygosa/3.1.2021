#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>


void get()
{
	printf("*******************************\n");
	printf("***1 ��Ϸ��ʼ   0 ��Ϸ����******\n");
	printf("*******************************\n");
	
}

void game()
{
	int guss;
	int shuzi = rand() % 100 + 1;
	
	printf("%d\n", shuzi);
	while (1)
	{
		printf("������һ�����ֲ�һ��->");
		scanf("%d", &guss);
		if (guss > shuzi)
		{
			printf("�´���\n");

		}
		else if (guss < shuzi)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���,,,,�����˳�\n");
			break;
		}
	}
}

int main()

{
	int put = 0;
	srand((unsigned int)time(NULL));
	do{
		get();
		printf("��ѡ����Ϸ>-");
		scanf("%d", &put);
		switch (put)
		{
		case 1:

			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ�����\n");
			break;


		}
		
	 } while (put);




	system("pause");
	return 0;
}