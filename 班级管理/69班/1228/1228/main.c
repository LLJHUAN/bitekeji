//̰��

//������m���һ����n����Ҫ�ɺӣ���֪��ÿ�����ֻ���������ˣ�������Ҫ���ض��ٴΣ����������е��˶��ɺ�
//100 6
//40 45 61 53 50 44

//4


//40 44 45 50 53 61

#include <stdio.h>

int main1()
{
	int m, n;
	scanf("%d%d", &m, &n);

	int arr[50];

	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}

	int tmp;
	int j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	//for (i = 0; i < n; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//putchar('\n');

	int count = 0;
	int l = 0, r = n - 1;

	while (l <= r)
	{
		if (arr[l] + arr[r] <= m)
		{
			l++;
		}
		r--;
		count++;
	}

	printf("%d", count);
	return 0;
}

//��������m����Ʒn������װ���ٸ�

//20 5
//2 3 4 6 8

void insertSort(int * arr, int n)
{
	int i, j;
	int tmp;
	for (i = 1; i < n; i++)
	{
		tmp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > tmp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = tmp;
	}
}

int main2()
{
	int m, n;
	scanf("%d%d", &m, &n);

	int arr[50];

	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}

	insertSort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');

	int sum = 0;
	for (i = 0; i < n && sum + arr[i] <= m; i++)
	{
		sum += arr[i];
	}

	printf("%d", i);
	return 0;
}

//һ����n��ʯ�ӣ�Ҫ�����Ǻϳ�һ�ѣ�ÿ��ֻ�ܺϲ��������ѣ��ϲ�����Ҫ���ĵ�������������ʯ�Ӹ����ĺͣ�Ҫ������ϳ�һ�Ѻ�����Ҫ����С������

//5
//1 2 3 4 5

//33

int main3()
{
	int n;
	scanf("%d", &n);

	int arr[50];

	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}

	insertSort(arr, n);

	int tmp;
	int sum = 0;

	int j;
	for (i = 1; i < n; i++)
	{
		tmp = arr[i] + arr[i - 1];
		sum += tmp;

		for (j = i; j < n - 1 && arr[j + 1] < tmp; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[j] = tmp;
	}

	printf("%d", sum);
	return 0;
}



//·������

int main4()
{
	int map[22][22] = { 0, 1 };

	int n, m;

	scanf("%d%d", &n, &m);

	int sn, sm;

	scanf("%d%d", &sn, &sm);

	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (i == sn && j == sm)
			{
				continue;
			}
			map[i][j] = map[i - 1][j] + map[i][j - 1];
		}
	}

	printf("%d", map[n][m]);
	return 0;
}


//��������/����

int printForm(int data[][22])
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf("%d ", data[i][j]);
		}
		putchar('\n');
	}
}

int main()
{
	int map[22][22] = { 
		{ 0 },
		{ 0, 4, 6, 14, 12 },
		{ 0, 11, 13, 7, 9 },
		{ 0, 1, 3, 10, 8 },
		{ 0, 17, 2, 5, 18 },
	};
	int tmp[22][22] = { 0 };
	int path[22][22] = { 0 };
	int n = 4, m = 4;


	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			tmp[i][j] = tmp[i][j - 1];
			if (tmp[i - 1][j] > tmp[i][j - 1])
			{
				path[i][j] = 1;
				tmp[i][j] = tmp[i - 1][j];
			}
			tmp[i][j] += map[i][j];
		}
	}

	//printForm(tmp);
	//printForm(path);

	printf("%d\n", tmp[n][m]);

	int x = n, y = m;
	for (i = 0; i < n + m - 2; i++)
	{
		printf("%d ", map[x][y]);
		if (path[x][y])
		{
			x--;
		}
		else
		{
			y--;
		}
	}
	printf("%d\n", map[1][1]);
	return 0;
}
