// ��дһ�������ȡ���룬ֱ�� # ������������ ei ���ֵĴ�����
// ˵����
	// �˳������Ҫ��סǰһ���ַ��͵�ǰ���ַ��������� ��Receive your eieio award.�� ����������������

#include <stdio.h>

int main()
{
	char char_now;
	char char_before;
	char count_ei;
	
	char_before = '\0';
	count_ei = 0;
	
	while (scanf("%c", &char_now) && char_now != '#')
	{
		if (char_before == 'e' && char_now == 'i')
			count_ei++;
		char_before = char_now;
	}
	
	printf("Count for ei : %d\n", count_ei);
	
	return 0;
} 
