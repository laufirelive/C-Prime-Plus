// ��дһ�������������� 3 ��������һ���ַ��������������ַ���������Ҫ������ַ�����һ������˵������ÿ���и��ַ�����ĸ�����
// ���ڶ�������ָ������Ҫ�������������дһ�����øú����ĳ���

#include <stdio.h>

int printch(char ch, int len, int rows);

int main()
{
	printch('a', 6, 5);
	return 0;
} 

int printch(char ch, int len, int rows)
{
	if (len <= 0 || rows <= 0)
		return 0;
	
	while (rows--)
	{
		int i;
		for (i = 0; i < len; i++)
			putchar(ch);
		
		putchar('\n');
	}
	
	return 1;
}