// ��дһ�������һ�����ʶ���һ���ַ����飬Ȼ�����ӡ������ʡ�
// ��ʾ��ʹ�� strlen()���� 4 �£��������������һ���ַ���������

#include <stdio.h>
#include <string.h>

int main()
{
	int i, word_len;
	char word[21];
	
	scanf("%s", word);
	word_len = strlen(word);
	
	for (i = word_len; i > 0 ; i--)
	{
		printf("%c", word[i-1]);
	}
	
	printf("\n");
	
	return 0;
} 
