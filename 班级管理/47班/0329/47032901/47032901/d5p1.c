#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main1()
{
	srand((unsigned int)time(NULL));
	int r = rand() % 100;
	int n = -1;

	while (n != r)
	{
		while (!scanf("%d", &n))
		{
			getchar();
		}
		if (n > r)
		{
			printf("�´���\n");
		}
		else if (n < r)
		{
			printf("��С��\n");
		}
	}
	printf("�¶���\n");

	system("pause");
	return 0;
}