// ��дһ��������ʾһ���˵���Ϊ���ṩ�ӷ����������˷��ͳ�����ѡ��������ѡ��󣬸ó���������������Ȼ��ִ����ѡ��Ĳ�����
// �ó���Ӧ��ֻ���������ṩ�Ĳ˵�ѡ���Ӧ��ʹ��float���͵�������������û�δ����������Ӧ�������������롣�ڳ���������У�
// ����û����� 0 ��Ϊ�ڶ������������ó���Ӧ����ʾ�û�����һ���µ�ֵ��һ�����͵ĳ�������Ӧ��������ʾ��

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