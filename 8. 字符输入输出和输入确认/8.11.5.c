// �޸ĳ����嵥 8.4 �еĲ²����ʹ��ʹ�ø����ܵĲ²�߿������磬��������� 50 ������ѯ���û��ò²�ֵ�Ǵ�С������ȷ��
// ����²�ֵС��������һ�β²�ֵΪ 50 �� 100 ����ֵ��Ҳ���� 75 ����� 75 ������һ�β²�ֵΪ 75 �� 50 ����ֵ���ȵȡ�
// ʹ�����ֶ���������binary search�����ԣ���������û�û����ƭ���ó���ܿ������ȷ�𰸡�

#include <stdio.h>

int main()
{
	char temp;
	int guess;
	int max = 100;
	int min = 0;
	
	guess = min + max / 2;
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong\n");
	printf("Uh...is your number %d?\n", guess);
	
	while ((temp = getchar()) == '\n') ;
	
	while (temp != 'y')
	{
		printf("is my guess too high?\n");
		
		while ((temp = getchar()) == '\n');
		
		if (temp == 'y')
			max = guess - 1;
		else
			min = guess + 1;
		
		guess = (min + max) / 2;
		
		printf("Well, then, is it %d?\n", guess);
		while ((temp = getchar()) == '\n') ;
	}
	printf("I knew I could do it!\n");
} 
