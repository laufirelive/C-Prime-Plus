// 编写一个程序，显示一个菜单，为您提供加法、减法、乘法和除法的选项。获得您的选择后，该程序请求两个数，然后执行您选择的操作。
// 该程序应该只接受它所提供的菜单选项。它应该使用float类型的数，并且如果用户未能输入数字应允许其重新输入。在除法的情况中，
// 如果用户输入 0 作为第二个操作数，该程序应该提示用户输入一个新的值。一个典型的程序运行应该如下所示：

// Enter the operation of your choice : 
// a. add		s. subtract
// m. multiply		d.divide
// q.quit
// a
// Enter first number: 22.4
// Enter second number: one
// one is not an number.
// Please enter a number, such as 2.5, -1.78E8, or 3: 1
// 22.4 + 1 = 23.4
// Enter the operation of your choice : 
// a. add		s. subtract
// m. multiply		d.divide
// q.quit
// d
// Enter first number: 18.4
// Enter second number: 0
// Enter a number other than 0: 0.2
// 18.4 / 0.2 = 92
// Enter the operation of your choice : 
// a. add		s. subtract
// m. multiply		d.divide
// q.quit
// q
// Bye.

#include <stdio.h>
#include <math.h>

char menu();
float getNumber();

int main()
{
	float num_first;
	float num_second;
	
	while (1)
	{
		char selection = menu();
		if (selection == 'q')
			break;
		
		puts("Enter first number: ");
		num_first = getNumber();
		puts("Enter second number: ");
		num_second = getNumber();
		
		switch(selection)
		{
			case 'a' : 
				printf("%.2f + %.2f = %.2f\n",
						num_first, num_second, num_first + num_second); break;
			case 's' : 
				printf("%.2f - %.2f = %.2f\n", 
						num_first, num_second, num_first - num_second); break;
			case 'm' : 
				printf("%.2f * %.2f = %.2f\n", 
						num_first, num_second, num_first * num_second); break;
			case 'd' : 
				while (abs(num_second) < 1e-6)
				{
					printf("Enter a number other than 0: ");
					num_second = getNumber();
				}
				printf("%.2f / %.2f = %.2f", 
						num_first, num_second, num_first / num_second); break;
		}
	}
	printf("Bye.\n");
	return 0;
} 

char menu()
{
	char selection;
	
	puts("Enter the operation of your choice : ");
	puts("a. add			s. subtract");
	puts("m. multiply		d.divide");
	puts("q. quit");

	while (1)
	{
		while (!scanf("%c", &selection));
		switch(selection)
		{
			case 'a' : 
			case 's' : 
			case 'm' : 
			case 'd' : 
			case 'q' :	
				while (getchar() != '\n');
				return selection;
			default : 
				while (getchar() != '\n');
				printf("Wrong type, try again: ");
		}
	}	
}


float getNumber()
{
	float num;
	while (!scanf("%f", &num))
	{
		while (getchar() != '\n')
			continue;
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}
	
	while (getchar() != '\n')
		continue;
	
	return num;
}