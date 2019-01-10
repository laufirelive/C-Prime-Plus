// 在美国通常是以英里每加仑来计算友好，在欧洲是以升每百公里来计算。
// 下面是某程序的一部分该程序让用户选择一个模式（公制的或美制的），然后收集数据来计算油耗。

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

