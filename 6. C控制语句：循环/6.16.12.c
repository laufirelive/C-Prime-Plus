// ��дһ�����򣬴���һ�� 8 ��Ԫ�ص� int ���飬���Ұ�Ԫ�طֱ�����Ϊ 2 ��ǰ 8 ���ݣ�Ȼ���ӡ���ǵ�ֵ��
// ʹ�� for ѭ��������ֵ�� Ϊ�˱仯��ʹ�� do while ѭ������ʾ��Щֵ��

#include <stdio.h>
#define LEN 8

int main()
{
	int a[LEN];
	int i, j;
	
	for (i = 0; i < LEN; i++)
	{
		a[i] = 2;
		for (j = 0; j < i; j++)
			a[i] *= 2;
	}
	
	i = 0;
	do
	{
		printf("%d : %d\n", i+1, a[i]); 
	} while (++i < 8);
} 
