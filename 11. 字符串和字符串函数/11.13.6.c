// strncpy(s1, s2, n) 函数从 s2 复制 n 个字符给 s1，并在必要时截断 s2 或为其填充额外的空字符。
// 如果 s2 的长度等于或大于 n ，目标字符串就没有标志结束的空字符。函数返回 s1。
// 自己编写这个函数，并在一个使用循环语句为这个函数提供输入的完整程序中进行测试。

#include <stdio.h>
#include <string.h>
#define LEN 31

char * mystrncpy(char * target, char * source, int n);

int main()
{
	int len;
	char a[LEN];
	char b[LEN];

	while (1)
	{
		printf("target : ");
		scanf("%s", b);
		while (getchar() != '\n');
		printf("source : ");
		scanf("%s", a);
		while (getchar() != '\n');
		printf("len : ");
		scanf("%d", &len);
		while (getchar() != '\n');
		printf("%s\n", mystrncpy(b, a, len));
	}
	return 0;
} 

char * mystrncpy(char * target, char * source, int n)
{
	int i, j;
	for (i = 0, j = 0; source[i] && j < n; i++, j++)
		target[i] = source[i];
	if (j < n)
		target[i] = '\0';
	return target;
}

