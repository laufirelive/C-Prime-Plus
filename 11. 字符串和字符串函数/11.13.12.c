// ��дһ�����򣬰����෴�ĵ���˳����������в�����������������в����� see you later���������ʾӦ��Ϊ later you see��

#include <stdio.h>

int main(int argc,char *argv[])
{
	int i;
	for (i = argc-1; i > 0; i--)
	{
		fputs(argv[i], stdout);
		putchar(' ');
	}
	putchar('\n');
	return 0;
}