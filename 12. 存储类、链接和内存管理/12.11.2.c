// ������ͨ������Ӣ��ÿ�����������Ѻã���ŷ��������ÿ�ٹ��������㡣
// ������ĳ�����һ���ָó������û�ѡ��һ��ģʽ�����ƵĻ����Ƶģ���Ȼ���ռ������������ͺġ�

//12.11.2.c

#include <stdio.h>
#include "12.11.2_b.h"

int main(void)
{
	int mode;
	
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit) : ");
		scanf("%d", &mode);
	}
	printf("Done\n");
	return 0;
}

