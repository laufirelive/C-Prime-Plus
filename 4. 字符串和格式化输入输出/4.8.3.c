// ��дһ�����򣬶�ȡһ��������������������С�����������Ȼ����ָ����������ӡ֮��
// ���ʹ��������ʽ����ָ��λ����ʾ������λ�����ܻ���ϵͳ����ͬ����
	// a. The input is 21.3 or 2.1e+001
	// b. The input is +21.290 or 2.129E+001
	
#include <stdio.h>

int main()
{
	float afloat;
	
	scanf("%f", &afloat);
	printf("The input is %.1f or %.1e\n", afloat, afloat);
	printf("The input is %+.3f or %+.3E\n", afloat, afloat);
	
	return 0;
} 
