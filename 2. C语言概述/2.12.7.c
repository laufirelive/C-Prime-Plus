// ��дһ�����򣬳�����Ҫ������Ϊ one_three() �ĺ�����
// �ú���Ҫ��һ������ʾ���� ��one�� ���ٵ��� two() ������
// Ȼ��������һ������ʾ���� ��three�� �� ���� two() Ӧ��
// ����һ������ʾ���� ��two�� �� main() ����Ӧ���ڵ���
// one_three() ����֮ǰ��ʾ���� ��starting now����������
// ��֮��Ҫ��ʾ ��done!���� ����������������Ӧ������ʾ��

// starting now
// one
// two
// three
// done!

#include <stdio.h>

void one_three();
void two();

int main()
{
	printf("starting now\n");
	one_three();
	printf("done!\n");
	
	return 0;
} 

void one_three()
{
	printf("one\n");
	two();
	printf("three\n");
}

void two()
{
	printf("two\n");
}