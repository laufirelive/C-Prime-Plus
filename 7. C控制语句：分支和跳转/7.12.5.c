// �� switch ������ϰ 3

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
		switch (num_typed % 2)
		{
			case 0 : 
				even_count++;
				even_sum+=num_typed;
				break;
			case 1 :
				odd_count++;
				odd_sum+=num_typed;
				break;
		}
	}
		printf("ż���ܸ��� ��%d\n", even_count);
		printf("�����ܸ��� ��%d\n", odd_count);
		printf("ż��ƽ��ֵ ��%.2f\n", even_sum / (float)even_count);
		printf("����ƽ��ֵ ��%.2f\n", odd_sum / (float)odd_count);
	
	return 0;
} 
