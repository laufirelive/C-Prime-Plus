// ��ƺ��� chline(ch, i, j)�� ʵ���ƶ��ַ��� i �е� j �е������ͬʱ��һ���򵥵�����������Ըú�����

#include <stdio.h>

int chline(char ch, int i, int j);

int main()
{
	chline('a', 9, 10);
	chline('b', 5, 15);
	
	return 0;
} 

int chline(char ch, int i, int j)
{
	int index;
	
	if (i <= 0 || i > j)
		return 0;
	
	for (index = 1; index <= j; index++)
		printf("%-5.2d", index);
	
	putchar('\n');
	
	for (index = 1; index <= j; index++)
	{
		if (index >= i && index <= j)
			printf("%-5c", ch);
		else
			printf("%-5c", ' ');
	}
	putchar('\n');
	return 1;
}