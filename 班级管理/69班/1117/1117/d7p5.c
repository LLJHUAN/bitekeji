#include <stdio.h>
#include <math.h>

//���ݹ���ȷ�������ͷ���ֵ
//ճ��Ȼ��ĸ�
//    ����ȱʧ�ı������鿴������Ҫ�򻯵Ĳ��֣�ȷ������ֵ

//����ԭ��һ������ֻ��һ����
//����Ҫ�����ܵ��׶�
int judgePrime(int n)
{
	int i;
	int sqrtres = sqrt(n);
	for (i = 2; i <= sqrtres; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int d7p5()
{
	int n;
	
	for (n = 2; n <= 10000; n++)
	{
		if (judgePrime(n))
		{
			printf("%d\n", n);
		}
	}
	return 0;
}
