#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 2000
int n[MAX];
int main()
{
	int  i=0, j,k, t, x,pos;
	while (scanf("%d", &x) != EOF)       //回车+ctrlz+回车，优点是可以输入任意多的数
		n[i++] = x;
	for (j = 0; j < i; j++)
	{
		pos = j;
		for (k = j + 1; k < i; k++)
		{
			if (n[pos] > n[k])
				pos = k;
		}
		t = n[pos];
		n[pos] = n[j];
		n[j] = t;
	}
	for (j = 0; j < i; j++)
		printf("%d ", n[j]);
	return 0;
}