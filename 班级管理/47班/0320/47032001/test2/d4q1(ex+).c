#include <stdio.h>
#define WIDTH 2 //����ͼƬ��ȣ�Ҳ��������֮��ո�ĸ�����Ĭ��Ϊ1

int main()
{
	int i, j, k, l, m;
	int n, sub, floor, gap = 0;

	printf("��������������ÿ�����ǽ�������������\n");
	scanf("%d%d", &n, &sub);

	if (n % sub) //�������������Ƿ������㣬Ҫ�õ�һ��gapֵ��
	{
		floor = n / sub + 1;
		gap = floor * sub - n;
	}
	else
	{
		floor = n / sub;
	}

	for (i = 1; i <= floor; i++) //�ܲ���
	{
		for (j = 1; j <= (i == floor ? sub - gap : sub); j++) //ÿһ��ĵ�n�С���������һ�㣬Ҫ�ж���gap�����
		{ 
			for (k = 0; k < n - ((i - 1) * sub + j); k++) //(i - 1) * sub + j����������ӡǰ��Ŀո�
			{
				putchar(' ');
				for (m = 0; m < WIDTH; m++) //��ȿ������������֣���ͬ
				{
					putchar(' ');
				}
			}

			for (k = 0; k < i; k++) //��ӡ���������ǽ�����
			{
				for (l = 0; l < j * 2 - 1; l++) //2n-1�����ǣ�n����һ���е�����
				{ 
					putchar('*');
					for (m = 0; m < WIDTH; m++)
					{
						putchar(' ');
					}
				}

				if (k == i - 1) break; //���һ�β���Ҫ�ں��油�ո�
				
				for (l = 0; l < sub * 2 - j * 2 + 1; l++) //����Ӧ�ո񣬷�����һ�δ�ӡ��Ҫ��ӡ������������*2-(2n-1)���ո�
				{
					putchar(' ');
					for (m = 0; m < WIDTH; m++)
					{
						putchar(' ');
					}
				}
			}
			putchar('\n'); //һ�н���
		}
	}
	system("pause");
	return 0;
}