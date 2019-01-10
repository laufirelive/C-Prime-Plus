// ��д����Ҫ������һ�ܵĹ���Сʱ����Ȼ���ӡ�����ܶ˰���Լ������ʡ������¼��裺

	// a. ���������ȼ� = 10.0 ��Ԫ/Сʱ
	// b. �Ӱࣨ����40Сʱ�� = 1.5 ����ʱ��
	// c. ˰��		ǰ 300 ��ԪΪ 15%
				//  ��һ�� 150 ��ԪΪ 20%
				//  ���µ�Ϊ 25%

// �� #define ���峣�������ع��ı����Ƿ���ϵ�ǰ��˰����

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
