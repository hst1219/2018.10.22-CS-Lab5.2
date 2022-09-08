#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, d, e;
	
	printf("請輸入五個數字:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);

	int A[5] = { a,b,c,d,e };
	int i, max, min;
    max = min = A[0];   /*將min max設為陣列的第一個元素*/

	for (i = 0; i < 5; i++)
	{
		if (A[i] > max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
    }
	printf("最大值 : %d    最小值:%d\n", max, min);

	system("pause");
	return 0;

}