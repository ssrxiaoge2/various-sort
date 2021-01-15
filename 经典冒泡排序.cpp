#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 2000
int n[MAX];
int main()
{
	int  i=0, j,k, t, x;
	while (scanf("%d", &x) != EOF)       //回车+ctrlz+回车，优点是可以输入任意多的数
		n[i++] = x;
	for (j = 0; j < i-1; j++)
	{
		for (k = 0; k < i - 1 - j; k++)
		{
			if (n[k] > n[k + 1])
			{
				t = n[k];
				n[k] = n[k + 1];
				n[k + 1] = t;
			}
		}
	}
	for (j = 0; j < i; j++)
		printf("%d ", n[j]);
	return 0;
}