#include <stdio.h>

/*
�Ĺ��˾��ǳ��Σ��ù��˾������

��ȥ���ô��������ҸĸĴ���ַ
*/

void swap(int *pa, int *pb)
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
/*
void swap(int *pa, int *pb)
{
	int * tmp;

	tmp = pa;
	pa = pb;
	pb = tmp;
}
*/
int d7p2()
{
	int a = 5, b = 8;

	swap(&a, &b);

	printf("%d %d", a, b);
	return 0;
}