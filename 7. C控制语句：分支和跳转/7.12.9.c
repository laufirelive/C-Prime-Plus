// ���һ�����򣬽���һ���������룬Ȼ����ʾ����С�ڻ���ڸ�����������

#include <stdio.h>

int isPrime(int num);

int main()
{
	int i, max, count_line;;
	scanf("%d", &max);
	
	for (i = 3, count_line = 1; i <= max; i++)
	{
		if (isPrime(i))
		{
			printf("%-5d", i);
			if (count_line++ % 5 == 0)
				printf("\n");
		}
	}
	if (--count_line % 5)
		printf("\n");
	return 0;
}

int isPrime(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			break;
	}
	
	if (i == num)
		return 1;
	else
		return 0;
}

