// 重新设计练习 2 中的程序，使它仅使用自动变量。程序提供相同的用户界面，也就是说，要提示用户输入模式等等。然而，您还必须给出一组不同的函数调用。

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