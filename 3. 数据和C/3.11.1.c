// ͨ��ʵ��ķ���������д���д�������ĳ��򣩹۲�ϵͳ��δ����������硢����������͸���������������

#include <stdio.h>

int main()
{
	int aInt;
	float aFloat;
	float bFloat;
	
	aInt = 2147483647;
	aFloat = 3.4E38;
	bFloat = -3.4E38;
	printf("aInt = %d\naInt + 1 = %d\n", aInt, aInt+1);
	printf("aFloat = %f\naFloat*100 = %f\n", aFloat, aFloat*100);
	printf("bFloat = %f\nbFloat*100 = %f\n", bFloat, bFloat*100);
	return 0;
} 
