#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int trb(int n)
{
	int x = 1;
	int y = 1;
	int z = 1;
	while (n > 2)
	{
		z=x+y;
		x = y;
		y = z;
		n--;
	}
	return z;
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	 printf("%d\n", trb(a));
	return 0;
}