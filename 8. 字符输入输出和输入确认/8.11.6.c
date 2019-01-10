// 修改程序清单 8.8 中的 get_first() 函数，使其返回所遇到的第一个非空白字符。在一个简单的程序中测试该函数。

#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main()
{
	int choice;
	void count(void);
	
	while ((choice = get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a' : 	printf("Buy low, sell high.\n");
						break;
			case 'b' :	putchar('\a');	/* ANSI */
						break;
			case 'c' :	count();
						break;
			default :	printf("Program error!\n");
						break; 
		}
	}
	printf("Bye. \n");
	return 0;
} 

void count(void)
{
	int n, i;
	
	printf("Count how far? Enter an integar: \n");
	n = get_int();
	for (i = 1; i <= n; i++)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;
}

char get_choice(void)
{
	int ch;
	
	printf("Enter the letter of your choice: \n");
	printf("a. advice		b. bell\n");
	printf("c. count		q. quit\n");
	ch = get_first();
	while ((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please respond with a, b, c, or q.\n");
		ch = get_first();
	}
	return ch;
}

//the Answer
char get_first(void)
{
	int ch;
	
	do
	{
		ch = getchar();
	}
	while (ch == ' ');
	
	while (getchar() != '\n')
		continue;
	return ch;
}

int get_int(void)
{
	int input;
	char ch;
	
	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		
		printf(" is not a integer.\nPlease enter an");
		printf("integer value, such as 25, -178, or 3 : ");
	}
	return input;
}
