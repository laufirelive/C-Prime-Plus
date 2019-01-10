// 编写一个程序，该程序用户输入天数，然后将该值转换为周数和天数。
// 例如，将程序将把 18 天转换成 2 周 4 天。用下面的格式显示结果：

	// 18 days are 2 weeks, 4 days.
	
// 编写一个程序让用户重复输入天数；当用户输入一个非整数（如 0 或 -20）时，程序将终止循环。

#include <stdio.h>
#define DAYS4AWEEK 7

int main()
{
	int days;
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d days are %d weeks, %d days.\n", days, days / 7, days % 7);
		scanf("%d", &days);
	}
	return 0;
} 
