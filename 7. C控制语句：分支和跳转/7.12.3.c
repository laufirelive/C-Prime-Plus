// ��дһ�����򡣸ó����ȡ������ֱ������ 0 ��
// ������ֹ�󣬳���Ӧ�ñ��������ż���������� 0 ���ܸ�����ż����ƽ��ֵ��
// ����������ܸ����Լ�������ƽ��ֵ��

#include <stdio.h>

int main()
{
	int num_typed;
	
	int even_count = 0;
	int odd_count = 0;
	int even_sum = 0;
	int odd_sum = 0;
	
	while (scanf("%d", &num_typed) && num_typed != 0)
	{
		if (num_typed % 2)
		{
			odd_count++;
			odd_sum+=num_typed;
		}
		else
		{
			even_count++;
			even_sum+=num_typed;
		}
	}
		printf("ż���ܸ��� ��%d\n", even_count);
		printf("�����ܸ��� ��%d\n", odd_count);
		printf("ż��ƽ��ֵ ��%.2f\n", even_sum / (float)even_count);
		printf("����ƽ��ֵ ��%.2f\n", odd_sum / (float)odd_count);
	
	return 0;
} 
