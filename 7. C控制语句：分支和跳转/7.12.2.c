// ��дһ�����򡣸ó����ȡ����ֱ�� # �ַ���ʹ�����ӡÿ��������ַ��Լ����õ�ʮ����ASCII�롣
// ÿ�д�ӡ 8 ���ַ�/����ԡ����飺�����ַ�������ģ�������%����ÿ8��ѭ������ʱ��ӡһ�����з���


#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	char c[MAXLEN];
	
	i = 0;
	
	while (i < MAXLEN && scanf("%c", c + i) && c[i] != '#') i++;
	
	len = i;
	
	for (i = 0; i < len; )
	{
		switch (c[i])
		{
			case '\n':
				printf("\\n : %3d ", c[i]); break;
			case '\t':
				printf("\\t : %3d ", c[i]); break;
			default :
				printf("%2c : %3d ", c[i], c[i]); break;
		}	
		if (0 == ++i % 8)
			printf("\n");
	}
	
	if (i % 8)
		printf("\n");
	
	return 0;
} 
