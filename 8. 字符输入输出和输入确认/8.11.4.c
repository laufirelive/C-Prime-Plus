// ��дһ�����򣬰�������Ϊ�ַ�����ȡ��ֱ������ EOF�����䱨��ÿ�����ʵ�ƽ����ĸ������Ҫ���հ��ַ���Ϊ�����е���ĸ��
// ʵ���ϣ�������Ҳ��Ӧ�ü��㣬�����ڲ��ؿ�����һ�㣨����������ĺ�һЩ��������ʹ�� ctype.h ϵ���е� ispunct() ������

#include <stdio.h>
#include <ctype.h>

#define MAXLEN 1024

int main()
{
	int i, len;
	int c[MAXLEN];
	
	int word_count = 0;
	int alpha_count = 0;
	
	i = 0;
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	for (i = 0; i < len; i++)
	{
		if (c[i] == ' ' && i != 0)
			word_count++;
		else if (!ispunct(c[i]))
			alpha_count++;
	}
	
	printf("�ܵ��ʣ�%d\nƽ����ĸ����%.2lf\n", word_count, alpha_count/(double)word_count);
} 
