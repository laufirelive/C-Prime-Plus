// ��дһ������Ҫ������������������Ȼ���ӡ�������ߵĲ�ֵ���Զ��ߵĳ˻����õĽ����
// ���û���������ֵ�����֮ǰ����ѭ������ÿ������ֵ��

#include <stdio.h>

int main()
{
	float aFloat, bFloat;
	while (scanf("%f %f", &aFloat, &bFloat) == 2)
	{
		printf("%f", (aFloat-bFloat) / aFloat*bFloat);
	}
	return 0;
} 
