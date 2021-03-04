#include<stdio.h>
#include<windows.h>
int main()

{

	//二分查找
	int k = 11;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int ligh = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;

	while (ligh <= right)
	{
	
			int ma = (ligh + right) / 2;
			if (arr[ma] > k)
			{
				right = ma - 1;

			}
			else if (arr[ma] < k)
			{
				ligh = ma + 1;
			}
			else
			{
				printf("找到 %d\n", arr[ma]);
				break;
			}

	}
	if (ligh>right)
	printf("找不到这个数啊\n");
	















	////写乘法口诀表
	//int i = 0;
	//int j = 0;
	//int sum = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	//打印一行
	//	for (j = 1; j <= i; j++)
	//	{

	//		printf("%d*%d=%-2d  ", i, j, sum = i*j);
	//	}
	//	printf("\n");

	//}


	////求最大数
	//int n[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
	//int max = n[0];

	//int i;
	//int sz = sizeof(n) / sizeof(n[0]);
	//for (i = 1; i < sz; i++)
	//{
	//	if (n[i]>max)
	//	{
	//		max = n[i];
	//	}

	//}
	//printf("max=%d", max);



	//int i = 97;
	//int counts = 10;
	//int sum;
	//sum = i / counts;
	////for (i = 1; i <= 100; i++)
	////{
	////	if (i % 10 == 9)
	////	{
	////		counts++;
	////	}
	////	if (i / 10 == 9)
	////	{
	////		counts++;
	////	}


	////}


	//printf("%d\n", sum);


	system("pause");
	return 0;
}