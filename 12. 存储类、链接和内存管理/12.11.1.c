// 在美国通常是以英里每加仑来计算友好，在欧洲是以升每百公里来计算。
// 下面是某程序的一部分该程序让用户选择一个模式（公制的或美制的），然后收集数据来计算油耗。

#include <stdio.h>

void critic(int *p_units);

int main(void)
{
	int units;
	
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic(&units);
	printf("You must have looked it up!\n");
	return 0;
}

void critic(int *p_units)
{
	printf("No luck, chummy. Try again.\n");
	scanf("%d", p_units);
}