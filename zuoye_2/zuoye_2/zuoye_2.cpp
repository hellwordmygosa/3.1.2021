#include<stdio.h>
#include<Windows.h>
int main()
{
	int k;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	scanf("%d", &k);
	int ligh = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;

	while (ligh <= right)
	{

		int maid = (ligh + right) / 2;
		if (arr[maid] > k)
		{
			right = maid - 1;
		}

		else if (arr[maid]<k)
		{
			ligh = maid + 1;
		}
		else
		{
			printf("找到了 %d\n", k);
			break;
		}
		if (ligh>right)
			printf("找不到啊");
		
	}































	//int k;
	//scanf("%d", &k);
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int lift = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int right = sz - 1;
	//
	//while (lift<=right)
	//{
	//	int mid = (lift + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid]<k)
	//	{
	//		lift = mid + 1;
	//	}
	//	else
	//	{
	//		printf("找到了  %d\n",k);
	//		break;
	//	}
	//	if (lift>right)
	//	{
	//		printf("没有找到\n");
	//	}
	//   }




















	//int k = 7;
	//int arr[] = { 1, 2, 3, 4, 5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	if (arr[i] == k)
	//	{
	//		printf("找到这个数%d\n",i+1);
	//		break;
	//	}
	//}
	//if (sz == i)
	//{

	//	printf("没有找到指定的数\n");
	//}





	system("pause");
	return 0;
}