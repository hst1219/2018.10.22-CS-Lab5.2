#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, d, e;
	
	printf("�п�J���ӼƦr:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);

	int A[5] = { a,b,c,d,e };
	int i, max, min;
    max = min = A[0];   /*�Nmin max�]���}�C���Ĥ@�Ӥ���*/

	for (i = 0; i < 5; i++)
	{
		if (A[i] > max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
    }
	printf("�̤j�� : %d    �̤p��:%d\n", max, min);

	system("pause");
	return 0;

}