// ��дһ�����򣬰�������Ϊ�ַ�����ȡ��ֱ������ EOF����ó����ӡÿ�������ַ��Լ� ASCII �����ʮ����ֵ��
// ע���� ASCII �����пո��ַ�ǰ����ַ��ǷǴ�ӡ�ַ���Ҫ���⴦����Щ�ַ�������Ǵ�ӡ�ַ��ǻ��з����Ʊ����
// ��ֱ��ӡ \n �� \t������ʹ�ÿ����ַ����š����磬ASCII �� 1 �� Ctrl + A��������ʾΪ^A��ע�� A �� ASCII
// ��ֵ�� Ctrl + A ��ֵ�� 64 ���������Ǵ�ӡ�ַ�Ҳ�������ƵĹ�ϵ����ȥÿ������һ�����з�ʱ�Ϳ�ʼһ������֮�⣬
// ÿ�δ�ӡ 10 ��ֵ��

#include <stdio.h>
#define MAXLEN 1024

int main()
{
	int i, len;
	int c[MAXLEN];
	
	i = 0;
	
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	
	for (i = 0; i < len; )
	{
		switch (c[i])
		{
			case '\n':
				printf("\\n : %4d ", c[i]); break;
			case '\t':
				printf("\\t : %4d ", c[i]); break;
			default :
				printf("%2c : %4d ", c[i], c[i]); break;
		}	
		if (0 == ++i % 10)
			printf("\n");
	}
	
	if (i % 8)
		printf("\n");
} 
