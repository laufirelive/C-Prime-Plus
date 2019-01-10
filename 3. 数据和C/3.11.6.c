// 1个水分子的质量约为 3.0 * 10^-34g，1夸脱水大约有 950g。
// 编写一个程序，要求输入水的夸脱数，然后显示这么多水中包含多少个水分子。

#include <stdio.h>

int main()
{
	int quarts;
	
	scanf("%d", &quarts);
	printf("quarts = %dg\nwater molecule = %e\n", quarts, quarts / 3E-34);
	
	return 0;
} 
