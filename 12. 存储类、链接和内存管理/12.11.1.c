// ������ͨ������Ӣ��ÿ�����������Ѻã���ŷ��������ÿ�ٹ��������㡣
// ������ĳ�����һ���ָó������û�ѡ��һ��ģʽ�����ƵĻ����Ƶģ���Ȼ���ռ������������ͺġ�

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