// 编写一个程序，读取一个浮点数，并且首先以小数点记数法，然后以指数记数法打印之。
// 输出使用下列形式（在指数位置显示的数字位数可能会随系统而不同）：
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
