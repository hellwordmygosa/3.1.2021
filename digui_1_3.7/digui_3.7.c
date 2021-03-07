#include<stdio.h>
#include<Windows.h>
#include"Add.h"
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int	sum = Add(a, b);
//	printf("%d\n", sum);
//
//
//
//
//	system("pause");
//	return 0;
//}

int print(int i)
{
	if (i > 9)//1234
	{
		print(i / 10);
	}
	printf("%d ", i%10);

}

int main()
{
	unsigned int i = 0;
	scanf("%d", &i);
	print(i);
	system("pause");
	return 0;
}