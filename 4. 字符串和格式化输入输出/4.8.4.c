// ��дһ������Ҫ��������ߣ���Ӣ��Ϊ��λ�������֣�Ȼ����������ʽ��ʾ��
	// Dabney, you are 6.208 feet tall
	
#include <stdio.h>

int main()
{
	char name[21];
	float inches;
	
	printf("name and height(inch) : ");
	scanf("%s %f", name, &inches);
	
	printf("%s, you are %.3f feet tall\n", name, inches / 12);
	
	return 0;
} 
