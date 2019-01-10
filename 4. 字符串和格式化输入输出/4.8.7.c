// 编写一个程序，要求用户输入行驶的英里数和消耗汽油的加仑数。
// 接着应该计算和显示消耗每加仑汽油行驶的英里数，显示方式是在小数点右侧显示一个数字。
// 然后，根据 1 加仑约等于 3.785 升，1 英里约等于 1.609 公里的规则，它应该把每加仑英
// 里数转换成每100公里的升数（欧洲通用的燃料消耗表示法），并显示结果，显示方式是小数
// 点右侧显示一个数字（请注意，美国方案测量每单位距离消耗的燃料数，而欧洲方案测量每单
// 位燃料的行驶距离）。用符号常量表示两个转换系数（使用 const 或 #define ）。

#include <stdio.h>
#define LITRE 3.785
#define KILOMETER 1.609

int main()
{
	float miles;
	float gallons;

	float kilometers;
	float litres;
	
	printf("miles : ");
	scanf("%f", &miles);
	printf("gallons : ");
	scanf("%f", &gallons);
	
	kilometers = miles * KILOMETER;
	litres = gallons * LITRE;
	
	printf("%.1f Miles for a Gallons\n", miles / gallons);
	printf("%.1f L for 100 KM\n", (litres / kilometers) * 100);
	return 0;
} 
