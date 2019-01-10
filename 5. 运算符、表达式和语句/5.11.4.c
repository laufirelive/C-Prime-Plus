// ��дһ���������û�����������һ���߶�ֵ��Ȼ�󣬳��������׺�Ӣ��Ӣ����ʾ����߶�ֵ��
// �������׺�Ӣ���ֵ����С�����֡����������û��������룬ֱ���û�����һ����������ֵ��
// �������е�ʾ��������ʾ��

	// Enter a height in centimeters : 182
	// 182.0 cm = 5 feet, 11.7 inches
	// Enter a height in centimeters (<=0 to quit) : 168
	// 168.0 cm = 5 feet, 6.1 inches
	// Enter a height in centimeters (<=0 to quit) : 0
	// bye
	
#include <stdio.h>
#define CM4AFEET 30.48
#define CM4AINCHE 2.54

int main()
{
	int cm_height;
	int feet;
	float inches;
	
	printf("Enter a height in centimeters : ");
	scanf("%d", &cm_height);
	
	while (cm_height > 0)
	{
		feet = cm_height / CM4AFEET;
		inches = (cm_height - feet * 30.48) / CM4AINCHE;
		
		printf("%.1d cm = %d feet, %.1f inches.\n", cm_height, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit) : ");
		scanf("%d", &cm_height);
	}
	
	printf("bye\n");

	return 0;
} 
