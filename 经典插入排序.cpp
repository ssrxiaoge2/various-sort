#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 2000
int n[MAX];
int main()
{
	int  i=0, j,k=0, t, x,pos;
	while (scanf("%d", &x) != EOF)       //回车+ctrlz+回车，优点是可以输入任意多的数
		n[i++] = x;
	for (j = 1; j < i; j++)       
	{
		pos = n[j];               
		k = j - 1;				
		while (k >= 0 && pos < n[k])
		{
			n[k + 1] = n[k];
			k--;
		}
		n[k + 1] = pos;
	}
	for (j = 0; j < i; j++)
		printf("%d ", n[j]);
	return 0;
}