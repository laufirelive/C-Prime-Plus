//	1.您刚刚被 MacroMuscley 有限公司 （Software For Hard Bodies) 聘用。该公司要进入欧洲市场，
//	需要一个将英寸转换为厘米 （ 1 英寸 = 2.54 cm ）的程序。他们希望建立的该程序可提示用户输
//	入英寸值。您的工作是定义程序目标并设计该程序。

#include <stdio.h>

int main()
{
	double inchs;
	scanf("%lf", &inchs);
	printf("%lf英寸 = %lfcm\n", inchs, inchs * 2.54);

	return 0;
}