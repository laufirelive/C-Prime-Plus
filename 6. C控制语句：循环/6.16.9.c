// ��дһ������Ҫ���û���������������һ������������
// Ȼ�����μ�������޵����ߵ�ÿһ��������ƽ���ļӺͣ�����������
// ���򽫲�����ʾ�û���������������������������ʾ���𰸣�ֱ���û��������������ڻ�С����������Ϊֹ��
// �������еĽ��ʵ��Ӧ��������ʾ �� 

// Enter lower and upper integer limits : 5 9
// The sums of the squares from 25 to 81 is 255
// Enter next set of limits : 3 25
// The sums of the squares from 9 to 625 is 5520
// Enter next set of limits : 5 5
// Done

#include <stdio.h>


int main()
{
	int lower, upper;
	printf("Enter lower and upper integer limits : ");
	scanf("%d %d", &lower, &upper);
	
	while (lower < upper)
	{
		int i, sum;
		for (i = lower, sum = 0; i <= upper; i++)
			sum += i*i;
		printf("The sums of the squares from %d to %d is %d\n", lower*lower, upper*upper, sum);
		printf("Enter next set of limits : ");
		scanf("%d %d", &lower, &upper);
	}
	printf("Done\n");
	return 0;
} 
