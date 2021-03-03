#include<stdio.h>
#include<windows.h>
int main()

{
	int i = 0;
	int counts = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			counts++;
		}
		if (i / 10 == 9)
		{
			counts++;
		}


	}


	printf("%d\n", counts);


	system("pause");
	return 0;
}