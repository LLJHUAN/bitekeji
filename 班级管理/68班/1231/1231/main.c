#include <stdio.h>

void test()
{
	printf("test\n");
}

int t2()
{
	void(*pf)() = test;
	void(**ppf)() = &pf;

	//(*****&***&**&**&**&***&****&*******pf)();

	(&**&*ppf)();

	(*****test)();
	//ȡ��ַ��û�����忴���ǲ��Ǻ���������
	//��������û�����忴���ǲ��Ƕ༶����ָ��
	return 0;
}


int add(int a, int b)
{
	return a + b;
}

int min(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int divi(int a, int b)
{
	return a / b;
}

int t1()
{
	int(*pfunc[6])(int, int) = { mul, add, NULL, min, NULL, divi };

	int a, b;
	char s;
	scanf("%d%c%d", &a, &s, &b);

	printf("%d", pfunc[s - '*'](a, b));
	return 0;
}