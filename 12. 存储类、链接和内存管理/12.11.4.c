// ��дһ�������������غ����������õĴ���������һ��ѭ���в���֮��

#include <stdio.h>

int callme(void);

int main(void)
{
	int times;
	printf("How many times do you want to call ? \n");
	while (!scanf("%d", &times))
		getchar();
	
	printf("Here we go :\n");
	for (int i = 0; i < times; i++)
	{
		printf("%d\n", callme());
	}
	return 0;
}

int callme(void)
{
	static int count = 0;
	
	return ++count;
}