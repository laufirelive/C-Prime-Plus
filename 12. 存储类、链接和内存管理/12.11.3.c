// ���������ϰ 2 �еĳ���ʹ����ʹ���Զ������������ṩ��ͬ���û����棬Ҳ����˵��Ҫ��ʾ�û�����ģʽ�ȵȡ�Ȼ���������������һ�鲻ͬ�ĺ������á�

//12.11.3.c

#include <stdio.h>
#include "12.11.3_b.h"

int main(void)
{
	int mode;
	
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		mode = set_mode(mode);
		show_info(mode, get_info(mode));
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit) : ");
		scanf("%d", &mode);
	}
	printf("Done\n");
	return 0;
}