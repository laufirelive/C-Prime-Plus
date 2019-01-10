// ��дһ������ʹ��ӱ�׼�����ȡ�ַ���ֱ�������ļ���β������ÿ���ַ���������Ҫ��鲢������ַ��Ƿ���һ���ַ���
// ����ǵĻ�������Ӧ�ñ������ĸ����ĸ���е���ֵλ�á����磬c �� C ����ĸλ�ö��� 3 ��
// ����ʵ������һ�������� ����һ���ַ�������������ַ�Ϊ��ĸ�򷵻ظ���ĸ����ֵλ�ã����򷵻� -1 ��

#include <stdio.h>
#define MAXLEN 1024
int isAlpha(char ch);

int main()
{
	int i, len;
	int c[MAXLEN];
	
	i = 0;
	
	while (i < MAXLEN && (c[i] = getchar()) && c[i] != EOF) i++;
	
	len = i;
	
	for (i = 0; i < len; )
	{
		int temp;
		if ((temp = isAlpha(c[i])) != -1)
			printf("%c : %d ", c[i], temp);
		if (0 == ++i % 10)
			printf("\n");
	}
	
	if (i % 8)
		printf("\n");
	return 0;
} 

int isAlpha(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return ch - 64;
	if (ch >= 'a' && ch <= 'z')
		return ch - 96;
	return -1;
}