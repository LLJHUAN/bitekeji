#include <stdio.h>
#include <ctype.h>
/*
�Ρ���
����
����
*/
int d5p4()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (isalpha(ch))
		{
			putchar(ch ^ 32);
			//^ ���Ըı�ĳһλ��״̬
			//| ����ǿ��ĳһλ��1
			//&~ ����ǿ��ĳһλ��0
		}
		else if (isdigit(ch))
		{
			//do nothing
		}
		else
		{
			putchar(ch);
		}
	}

	return 0;
}