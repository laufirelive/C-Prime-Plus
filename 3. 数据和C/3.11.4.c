// 编写一个程序，读入一个浮点数，并分别以小数形式和指数形式打印。
// 输出应如同下面格式（实际显示的指数位数也许因系统而不同）：

// The input is 21.290000 or 2.129000e+001

#include <stdio.h>

int main()
{
	float afloat;
	
	scanf("%f", &afloat);
	printf("The input is %f or %e\n", afloat, afloat);
	
	return 0;
} 
