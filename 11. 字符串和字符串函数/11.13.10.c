// ��дһ�����򣬶�ȡ���룬ֱ������ 10 ���ַ��������� EOF�����������ȱ�������Ǹ���ֹ��ȡ���̡�
// ����������Ϊ�û��ṩһ���� 5 ��ѡ��Ĳ˵���

	// �����ʼ�ַ����б�
	// ��ASCII˳������ַ���
	// �����ȵ���˳������ַ���
	// ���ַ����е�һ�����ʵĳ�������ַ���
	// �˳�

// �˵�����ѭ����ֱ���û������˳����󡣵�Ȼ������Ҫ��������ɲ˵��еĸ���ܡ�
	
#include <stdio.h>
#define LEN 1024
#define STR_COUNT 5

void get_Input(int rows, int columns, char s[rows][columns]);
void put_Str(int rows, int columns, char s[rows][columns]);
void put_Str_inAscii(int rows, int columns, char s[rows][columns]);
void put_Str_inLen(int rows, int columns, char s[rows][columns]);
void put_str_word(int rows, int columns, char s[rows][columns]);
int menu();

int main()
{
	char s[STR_COUNT][LEN];
	get_Input(STR_COUNT, LEN, s);
	while (1)
	{
		switch(menu())
		{
			case 1 : put_Str(STR_COUNT, LEN, s); break;
			case 2 : put_Str_inAscii(STR_COUNT, LEN, s); break;
			case 3 : put_Str_inLen(STR_COUNT, LEN, s); break;
			case 4 : put_str_word(STR_COUNT, LEN, s); break;
			case 5 : return 0; break;
		}
	}
	
	return 0;
} 

int menu()
{
	int seletion;
	puts("1. �����ʼ�ַ����б�");
	puts("2. ��ASCII˳������ַ���");
	puts("3. �����ȵ���˳������ַ���");
	puts("4. ���ַ����е�һ�����ʵĳ�������ַ���");
	puts("5. �˳�");
	while (scanf("%d", &seletion) && seletion < 1 && seletion > 5)
		;
	return seletion;
}

void get_Input(int rows, int columns, char s[rows][columns])
{
	int i;
	for (i = 0; i < STR_COUNT; i++)
	{
		printf("String %d ��", i+1);
		if (*fgets(s[i], columns, stdin) == EOF)
			break;
	}
	return;
}

void put_Str(int rows, int columns, char s[rows][columns])
{
	int i;
	for (i = 0; i < rows; i++)
	{
		printf("String %d : ", i+1);
		fputs(s[i], stdout);
	}
}

void put_Str_inLen(int rows, int columns, char s[rows][columns])
{
	int i, j, k;
	int len[rows];
	char *order[rows];
	
	for (i = 0; i < rows; i++)
	{
		order[i] = s[i];
		for (j = 0, len[i] = 0; *(s[i]+j); j++)
			len[i]++;
		
	}
	
	for (i = 0; i < rows; i++)
	{
		char *temp;
		int temp_num;
		for (j = i, k = i; j < rows; j++)
		{
			if (len[j] < len[k])
				k = j;
		}
		
		temp = order[k]; 		temp_num = len[k];
		order[k] = order[i];	len[k]	 = len[i];
		order[i] = temp;		len[i] 	 = temp_num;
		
		printf("String %d : ", i+1);
		fputs(order[i], stdout);
	}

}


void put_Str_inAscii(int rows, int columns, char s[rows][columns])
{
	int i, j, k;
	char *order[rows];
	for (i = 0; i < rows; i++)
	{
		order[i] = s[i];
	}
	
	for (i = 0; i < rows; i++)
	{
		char *temp;
		for (j = i, k = i; j < rows; j++)
		{
			if (*order[j] > *order[k])
				k = j;
		}
		
		temp = order[k];
		order[k] = order[i];
		order[i] = temp;
        
		printf("String %d : ", i+1);
		fputs(order[i], stdout);
	}
}

void put_str_word(int rows, int columns, char s[rows][columns])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		printf("String %d : ", i+1);
		for (j = 0; *(s[i] + j) != ' ' && *(s[i] + j); j++)
		{
			putchar(*(s[i] + j));
		}
		if (*(s[i] + j-1) != '\n')
			putchar('\n');
	}
}
