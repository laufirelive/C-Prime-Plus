// 编写一个程序让用户按厘米输入一个高度值，然后，程序按照厘米和英尺英寸显示这个高度值。
// 允许厘米和英寸的值出现小数部分。程序允许用户继续输入，直到用户输入一个非正的数值。
// 程序运行的示例如下所示：

	// Enter a height in centimeters : 182
	// 182.0 cm = 5 feet, 11.7 inches
	// Enter a height in centimeters (<=0 to quit) : 168
	// 168.0 cm = 5 feet, 6.1 inches
	// Enter a height in centimeters (<=0 to quit) : 0
	// bye
	
#include <stdio.h>
#define CM4AFEET 30.48
#define CM4AINCHE 2.54

int main()
{
	int cm_height;
	int feet;
	float inches;
	
	printf("Enter a height in centimeters : ");
	scanf("%d", &cm_height);
	
	while (cm_height > 0)
	{
		feet = cm_height / CM4AFEET;
		inches = (cm_height - feet * 30.48) / CM4AINCHE;
		
		printf("%.1d cm = %d feet, %.1f inches.\n", cm_height, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit) : ");
		scanf("%d", &cm_height);
	}
	
	printf("bye\n");

	return 0;
} 
