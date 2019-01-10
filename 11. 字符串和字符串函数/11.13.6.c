// strncpy(s1, s2, n) ������ s2 ���� n ���ַ��� s1�����ڱ�Ҫʱ�ض� s2 ��Ϊ��������Ŀ��ַ���
// ��� s2 �ĳ��ȵ��ڻ���� n ��Ŀ���ַ�����û�б�־�����Ŀ��ַ����������� s1��
// �Լ���д�������������һ��ʹ��ѭ�����Ϊ��������ṩ��������������н��в��ԡ�

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

