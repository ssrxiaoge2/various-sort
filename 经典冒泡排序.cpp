#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 2000
int n[MAX];
int main()
{
	int  i=0, j,k, t, x;
	while (scanf("%d", &x) != EOF)       //�س�+ctrlz+�س����ŵ��ǿ���������������
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