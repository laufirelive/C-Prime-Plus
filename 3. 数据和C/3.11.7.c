// 1Ӣ�����2.54cm����дһ������Ҫ������������ߣ���Ӣ��Ϊ��λ����
// Ȼ����ʾ�����ֵ���ڶ������ס������Ը�⣬Ҳ����Ҫ��������Ϊ��λ
// ������ߣ�Ȼ����Ӣ��Ϊ��λ������ʾ��

#include <stdio.h>

int main()
{
	float cm;
	
	scanf("%f", &cm);
	printf("height = %.2fcm\nheight = %.2finches\n", cm, cm / 2.54f);
	
	return 0;
} 
