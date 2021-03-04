#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>


void get()
{
	printf("*******************************\n");
	printf("***1 游戏开始   0 游戏结束******\n");
	printf("*******************************\n");
	
}

void game()
{
	int guss;
	int shuzi = rand() % 100 + 1;
	
	printf("%d\n", shuzi);
	while (1)
	{
		printf("请输入一个数字猜一下->");
		scanf("%d", &guss);
		if (guss > shuzi)
		{
			printf("猜大了\n");

		}
		else if (guss < shuzi)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了,,,,即将退出\n");
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
		printf("请选择游戏>-");
		scanf("%d", &put);
		switch (put)
		{
		case 1:

			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误\n");
			break;


		}
		
	 } while (put);




	system("pause");
	return 0;
}