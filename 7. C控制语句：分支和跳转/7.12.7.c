// 编写程序，要求输入一周的工作小时数，然后打印工资总额、税金以及净工资。作如下假设：

	// a. 基本工作等级 = 10.0 美元/小时
	// b. 加班（超过40小时） = 1.5 倍的时间
	// c. 税率		前 300 美元为 15%
				//  下一个 150 美元为 20%
				//  余下的为 25%

// 用 #define 定义常量，不必关心本例是否符合当前的税法。

#include <stdio.h>

#define HOURSALARY 	 	 10.0
#define WORKOVERTIME	 40
#define TAXRATE_1		 0.15
#define TAXRATE_2		 0.20
#define TAXRATE_3		 0.25	

double PayTax(double total_salary);
double GetSalary(int hours);

int main()
{
	int hours;
	double totalSalary;
	double tax;
	
	printf("how many hours did you work for this week : ");
	scanf("%d", &hours);
	
	totalSalary = GetSalary(hours);
	tax = PayTax(totalSalary);
	
	printf("Total Salary : %.2lf$\nTax : %.2lf$\nYour Salary : %.2lf$\n", totalSalary, tax, totalSalary - tax);
	
	return 0;
} 

double GetSalary(int hours)
{
	if (hours - WORKOVERTIME > 0)
		hours += 1.5 * (hours-WORKOVERTIME);
	
	return hours * HOURSALARY;
	
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
