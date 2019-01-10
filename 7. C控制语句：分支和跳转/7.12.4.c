// ���� if else ����д�����ȡ���룬ֱ�� # ����һ����̾�Ŵ���ÿ����ţ���ԭ�е�ÿ����̾����������̾�Ŵ��棬��󱨸�����˶��ٴ������

#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	int replace_count;
	char c[MAXLEN];
	
	i = 0;
	replace_count = 0;
	

	while (i < MAXLEN && scanf("%c", c + i) && c[i] != '#')
	{
		if (c[i] == '.')
		{
			c[i] = '!';
			replace_count++;
		}
		else if (c[i] == '!')
		{
			if (i+1 < MAXLEN)
			{
				c[++i] = '!';
				replace_count++;
			}	
		}
		i++;
	}
	len = i;
	for (i = 0; i < len; i++)
		printf("%c", c[i]);
	printf("\n");
	return 0;
} 
