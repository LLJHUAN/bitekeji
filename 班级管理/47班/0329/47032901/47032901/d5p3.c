#include <stdio.h>
#include <string.h>

int pwdJudge(char pwd[])
{
	char input[100] = { 0 };
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%99s", input);
		if (!strcmp(pwd, input))
		{
			return 1;
		}
	}
	return 0;
}

int main3()
{
	char pwd[100] = "bite47";

	if(pwdJudge(pwd))
	{ 
		printf("��¼�ɹ�\n");
	}
	else
	{
		printf("��¼ʧ��\n");
	}
	system("pause");
	return 0;
}