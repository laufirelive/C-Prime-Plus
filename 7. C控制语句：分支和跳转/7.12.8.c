// 修改练习 7 中假设的 a, 使程序提供一个选择个工资等级的菜单。用 switch 选择工资等级。 程序运行的开头应该像这样：

// ******************************************************************
// Enter the number corresponding to the desired pay rate or action :
// 1) $8.75						2) $9.33/hr
// 3) $10.00						4) $11.20/hr
// 5) quit
// ******************************************************************

#include <stdio.h>

#define WORKOVERTIME	 40
#define TAXRATE_1		 0.15
#define TAXRATE_2		 0.20
#define TAXRATE_3		 0.25	

double PayTax(double total_salary);
double GetSalary(int hours, double pay_rate);
int menu();

int main()
{
	int hours;
	double totalSalary;
	double tax;
	double payRate;
	
	payRate = 10.00;
	
	switch(menu())
	{
		case 1 : payRate = 8.75; break;
		case 2 : payRate = 9.33; break;
		case 3 : payRate = 10.00; break;
		case 4 : payRate = 11.20; break;
		case 5 : return 0;
	}
	
	printf("how many hours did you work for this week : ");
	scanf("%d", &hours);
	
	totalSalary = GetSalary(hours, payRate);
	tax = PayTax(totalSalary);
	
	printf("Total Salary : %.2lf$\nTax : %.2lf$\nYour Salary : %.2lf$\n", totalSalary, tax, totalSalary - tax);
	
	return 0;
} 

int menu()
{
	int selection;
	
	puts("******************************************************************");
	puts("Enter the number corresponding to the desired pay rate or action :");
	puts("1) $8.75			2) $9.33/hr");
	puts("3) $10.00			4) $11.20/hr");
	puts("5) quit");
	puts("******************************************************************");

	while (scanf("%d", &selection) && (selection <= 0 || selection >= 6))
		printf("Error Selection, try 1 - 5 : ");
	
	return selection;
}

double GetSalary(int hours, double pay_rate)
{
	if (hours - WORKOVERTIME > 0)
		hours += 1.5 * (hours-WORKOVERTIME);
	
	return hours * pay_rate;
	
}

double PayTax(double total_salary)
{
	if (total_salary - 300 <= 0)
		return total_salary * TAXRATE_1;
	
	else if (total_salary - 300 - 150 <= 0)
		return TAXRATE_1 * 300 + TAXRATE_2 * (total_salary - 300); 
	
	else
		return TAXRATE_1 * 300 + TAXRATE_2 * 150 + TAXRATE_3 * (total_salary - 300 - 150);
}
