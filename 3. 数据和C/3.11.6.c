// 1��ˮ���ӵ�����ԼΪ 3.0 * 10^-34g��1����ˮ��Լ�� 950g��
// ��дһ������Ҫ������ˮ�Ŀ�������Ȼ����ʾ��ô��ˮ�а������ٸ�ˮ���ӡ�

#include <stdio.h>

int main()
{
	int quarts;
	
	scanf("%d", &quarts);
	printf("quarts = %dg\nwater molecule = %e\n", quarts, quarts / 3E-34);
	
	return 0;
} 
