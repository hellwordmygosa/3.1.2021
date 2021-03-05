//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//
//
//int main()
//{
//	char arr1[] = "pass";
//	char arr2[] = "#############";
//	//strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));
//
//
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//#include<Windows.h>
//int main()
//{
//	char key[] = "apple";
//	char buffer[80];
//	do {
//		printf("Guess my favorite fruit? ");
//		fflush(stdout);
//		scanf("%79s", buffer);
//	} while (strcmp(key, buffer) != 0);
//	puts("Correct answer!");
//	system("pause");
//	return 0;
//}


//设置内存字符串
//#include<stdio.h>
//#include<Windows.h>
//#include<string.h>
//int main()
//{
//	int i = 3;
//	char arr[] = "hell word";
//	memset(arr,'*',3);
//	printf("%s\n", arr);
//
//
//	system("pause");
//	return 0;
//
//}

#include<stdio.h>
#include<Windows.h>

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
	{
		return y;
	}
}

int get_max2(int x, int y)
{
	int z = x > y ? x : y;
	return z;
}

void swap(int *z, int *v)
{
	int tem=0;
	tem = *z;
	*z = *v;
	*v = tem;


}
//用指针交换两个数的大小
int main()
{
	int a = 10;
	int b = 5;
	//int c = get_max2(a, b);
	//printf("%d\n", c);
	printf("%d,%d\n", a, b);
	swap(&a, &b);
	printf("%d,%d\n", a, b);

	system("pause");
	return 0;
}