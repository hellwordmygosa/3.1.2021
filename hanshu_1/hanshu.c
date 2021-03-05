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
//调用函数指针比较大小
//#include<stdio.h>
//#include<Windows.h>
//
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	{
//		return y;
//	}
//}
//
//int get_max2(int x, int y)
//{
//	int z = x > y ? x : y;
//	return z;
//}
//
//void swap(int *z, int *v)
//{
//	int tem=0;
//	tem = *z;
//	*z = *v;
//	*v = tem;
//
//
//}
////用指针交换两个数的大小
//int main()
//{
//	int a = 10;
//	int b = 5;
//	//int c = get_max2(a, b);
//	//printf("%d\n", c);
//	printf("%d,%d\n", a, b);
//	swap(&a, &b);
//	printf("%d,%d\n", a, b);
//
//	system("pause");
//	return 0;
//}
//
//#include<stdio.h>
//#include<Windows.h>
//#include<math.h>
//int re_pime(int n)
//{
//	int j;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断一个数是不是素数,不是
//		if (re_pime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//			
//	}
//
//
//	system("pause");
//	return 0;
//
//}

////是否为润年
//
//#include<stdio.h>
//#include<Windows.h>
//
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//
//	}
//
//
//	system("pause");
//	return 0;
//}

//二分查找
//#include<stdio.h>
//#include<Windows.h>
//
//
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (mid < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (mid>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//
//     return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int	bin=binary_search(arr, k,sz);
//	if (bin == -1)
//	{
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("%d \n", bin);
//	}
//
//	system("pause");
//	return 0;
//}
////求一个素数
//#include<stdio.h>
//#include<Windows.h>
//
//int is_prime(int s)
//{
//	int j = 0;
//	for (j = 2; j < s; j++)
//	{
//		if (s%j == 0)
//			return 0;
//	}
//	return 1;
//
//
//}
//int main()
//{
//
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		
//		int pe = is_prime(i);
//		if (pe == 1)
//			printf("%d ", i);
//		
//	}
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}
////判断是不是闰年
//#include<stdio.h>
//#include<Windows.h>
//
//int leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0)||(y%400==0))
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((leap_year(i)) == 1)
//		{
//		
//			printf("%d ", i);
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}
////二分查找
//#include<stdio.h>
//#include<Windows.h>
//
//int binary_search(int arr[], int y,int sz)
//{
//	int left = 0;
//	
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (mid > y)
//		{
//			right = mid - 1;
//		}
//		else if (mid < y)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pe = binary_search(arr, k,sz);
//	if (pe == -1)
//	{
//		printf("没有找到\n");
//	}
//	else
//	{
//		printf("%d ", pe);
//	}
//	
//
//
//
//	system("pause");
//	return 0;
//}


//调用一次函数num+1计数器
//#include<stdio.h>
//#include<Windows.h>
//
//void Add(int *i)
//{
//	(*i)++;
//
//}
//
//int main()
//{
//
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

//嵌套函数调用
//#include<stdio.h>
//#include<Windows.h>
//
//void haha()
//{
//	printf("haha\n");
//
//}
//
//void new_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		haha();
//	}
//}
//int main()
//{
//
//
//	new_line();
//
//
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));
//	system("pause");
//	return 0;
//}
//函数的声明

//#include<stdio.h>
//#include<Windows.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include<Windows.h>
//int main(){
//	enum week{ Mon=1, Tues, Wed, Thurs, Fri, Sat, Sun } day;
//	scanf("%d", &day);
//	switch (day){
//	case Mon: puts("Monday"); break;
//	case Tues: puts("Tuesday"); break;
//	case Wed: puts("Wednesday"); break;
//	case Thurs: puts("Thursday"); break;
//	case Fri: puts("Friday"); break;
//	case Sat: puts("Saturday"); break;
//	case Sun: puts("Sunday"); break;
//	default: puts("Error!");
//	}
//	system("pause");
//	return 0;
//}