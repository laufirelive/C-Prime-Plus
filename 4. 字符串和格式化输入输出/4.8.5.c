// ��дһ�����������û��������֣�Ȼ��Ҫ���û��������ϡ�
// ��һ�д�ӡ���������������һ�д�ӡÿ�������е���ĸ�ĸ�����
// ����ĸ��������Ӧ�����ֵĽ�β���룬������ʾ��

// Melissa Honeybee
// 		 7		  8
// Ȼ���ӡ��ͬ����Ϣ��������ĸ��������Ӧ���ʵĿ�ʼ���롣

// Melissa Honeybee
// 7	   8

#include <stdio.h>
#include <string.h>

int main()
{
	char first_name[21];
	char last_name[21];
	int count_first;
	int count_last;
	
	printf("type your first name : ");
	scanf("%s", first_name);
	printf("type your last name : ");
	scanf("%s", last_name);
	
	count_first = strlen(first_name);
	count_last = strlen(last_name);
	
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", count_first, count_first, count_last, count_last);
	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d\n", count_first, count_first, count_last, count_last);
	
	return 0;
} 
