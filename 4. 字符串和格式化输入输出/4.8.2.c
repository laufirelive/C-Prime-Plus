// ��дһ������Ҫ���������֣���ִ��һ�²�����

	// a. ����������˫�����д�ӡ����
	// b. �ڿ��Ϊ20���ַ����ֶ��ڴ�ӡ���֣����������ֶ�ӡ�������ڡ�
	// c. �ڿ��Ϊ20���ַ����ֶε���˴�ӡ���֣����������ֶ�ӡ�������ڡ�
	// d. �ڱ����ֿ�3���ַ����ֶ��ڴ�ӡ����

#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "JackSmith";
	int len = strlen(name);
	
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", len + 3, name);
	
	return 0;
} 
