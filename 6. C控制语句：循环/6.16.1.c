// 编写一个程序，创建一个具有 26 个元素的数组，并在其中保存 26 个小写字母。
// 并让程序显示该数组的内容

#include <stdio.h>

int main()
{
	char a[26];
	int i;
	
	for (i = 0; i < 26; i++)
	{
		a[i] = 'a' + i;
		printf("%c\t", a[i]);
		if (0 == (i+1) % 5)
			printf("\n");
	}
	printf("\n");
	
	return 0;
} 
