#include <stdio.h>
/*
forѭ�����Ǹɱ����Ļ��
1�����ֱ���
for(i = a; i < b; i++)
i����˶�����[a,b)֮��ı���

2���������
for(i = 0; i < n; i++)
a[i]����˶�����a�ı���

3����λ����
for(i = n; i; i /= m)
i % m�����m�����¶�nÿһλ�ı���

4���ַ�������
for(i = 0; str[i]; i++)
str[i]����˶��ַ���str�ı���

5���������
for(cur = head; cur; cur = cur->next)
cur����˶�����head�ı���

6����������
for(iter = v.begin(); iter != v.end(); iter++)
������iter����˶�����v�ı���

*/

void printNum(int n, int m)
{
	if (n > 0)
	{ 
		printNum(n / m, m);
		putchar("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[n % m]);
	}
}

int T1()
{
	int n = 310879183;

	/*int i;
	for (i = n; i; i /= 16)
	{
		printf("%d ", i % 16);
	}*/
	printNum(n, 16);
	return 0;
}

int conutOneEasy(int n)
{
	int count = 0;

	int i;
	for (i = n; i; i /= 2)
	{
		count += i % 2;
	}
	return count;
}

int conutOneNormal(int n)
{
	int count = 0;

	while (n)
	{
		n &= n - 1;
		count++;
	}
	return count;
}

int conutOne(int n)
{
	n = (n & 0x55555555) + (n >> 1 & 0x55555555);
	n = (n & 0x33333333) + (n >> 2 & 0x33333333);
	n = (n & 0x0f0f0f0f) + (n >> 4 & 0x0f0f0f0f);
	n = (n & 0x00ff00ff) + (n >> 8 & 0x00ff00ff);
	n = (n & 0x0000ffff) + (n >> 16 & 0x0000ffff);

	return n;
}

int main()
{
	int n = 310879183;
	

	printf("%d", conutOne(n));
	return 0;
}