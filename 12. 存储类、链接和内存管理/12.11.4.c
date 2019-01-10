// 编写一个函数，它返回函数自身被调用的次数，并在一个循环中测试之。

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