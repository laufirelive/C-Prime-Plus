// ��дһ�������书���Ƕ�ȡ���룬ֱ�������ļ�β�������ļ���ʾ������Ҫ��������ʶ��ִ������Ĳ�����

// ---------------------------------------
		// -p		| ����ԭ����ʾ����
// ---------------------------------------
		// -u		| ������ȫ��ת��Ϊ��д
// ---------------------------------------
		// -l		| �����ȫ��ת��Ϊ��д
// ---------------------------------------

#include <stdio.h>
#include <ctype.h>
#define MAXLEN 1024

int main(int argc, char *argv[])
{
	int i;
	char c[MAXLEN];
	
	if (argc != 2)
	{
		printf("�������� -p -u -l\n");
		return 1;
	}
	
	if (*(argv[1]++) != '-')
	{
		printf("�������� -p -u -l\n");
		return 1;
	}
	
	switch (*argv[1])
	{
		case 'p' :
				while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
				fputs(c, stdout);
			break;
		case 'u' :
				while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
				for (i = 0; c[i]; i++)
				{
					if (isalpha(c[i]))
						putchar(toupper(c[i]));
					else
						putchar(c[i]);
				}
			break;
		case 'l' :
				while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
				for (i = 0; c[i]; i++)
				{
					if (isalpha(c[i]))
						putchar(tolower(c[i]));
					else
						putchar(c[i]);
				}
			break;
		default :
			printf("�������� -p -u -l\n");
			return 1;
	}
	
	return 0;
}
