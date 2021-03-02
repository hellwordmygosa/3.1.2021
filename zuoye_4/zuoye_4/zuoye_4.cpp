#include<stdio.h>
#include<Windows.h>
#include<string.h>

int main()
{

	char arr1[] = "welcom tu bite!!!!";
	char arr2[] = "##################";
	int life = 0;
	int right = strlen(arr1) - 1;
	while (life <= right)
	{
		arr2[life] = arr1[life];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		life++;
		right--;
	}




	system("pause");
	return 0;
}