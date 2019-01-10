// ��д���� 100 �� 1 �� 10 ��Χ�ڵ���������򣬲����Խ������򣨿��Խ� 11 ���е������㷨�ԼӸĶ�����������������������ֱ���������򼴿ɣ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 100
void sort_bubble(int target[], int len);

int main(void)
{
	int num_random[LEN];
	
	srand((unsigned int)time(0));
	
	for (int i = 0; i < LEN; i++)
		num_random[i] = rand() % 10 + 1;
	
	sort_bubble(num_random, LEN);
	
	for (int i = 0; i < LEN; i++)
	{
		printf("%-5d", num_random[i]);
		if ((i+1) % 10 == 0)
			putchar('\n');
	}
	return 0;
}

void sort_bubble(int target[], int len)
{
	for (int i = 0; i < len; i++)
		for (int j = 1; j < len - i; j++)
			if (target[j-1] > target[j])
			{
				int temp = target[j-1];
				target[j-1] = target[j];
				target[j] = temp;
			}
}