// ��дһ�����򡣸ó����ȡ����ֱ�� # �ַ���Ȼ�󱨸��ȡ�Ŀո���Ŀ����ȡ�Ļ��з���Ŀ�Լ���ȡ�����������ַ���Ŀ��


#include <stdio.h>

int main()
{
	int space_count;
	int line_count;
	int other_count;
	char c;
	
	space_count = 0;
	line_count = 0;
	other_count = 0;
	
	while (scanf("%c", &c) && c != '#')
	{
		switch (c)
		{
			case ' ' : 
				space_count++; break;
			case '\n':
				line_count++; break; 
			default :
				other_count++; break;
		}
	}
	
	printf("�ո� %d ��\n", space_count);
	printf("���У� %d ��\n", line_count);
	printf("������ %d ��\n", other_count);
	
	return 0;
} 
