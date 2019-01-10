// 编写一个程序，要求输入身高（以英寸为单位）和名字，然后以如下形式显示：
	// Dabney, you are 6.208 feet tall
	
#include <stdio.h>

int main()
{
	char name[21];
	float inches;
	
	printf("name and height(inch) : ");
	scanf("%s %f", name, &inches);
	
	printf("%s, you are %.3f feet tall\n", name, inches / 12);
	
	return 0;
} 
