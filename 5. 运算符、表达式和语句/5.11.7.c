// ��дһ�����򣬸ó���Ҫ������һ��float��������ӡ����������ֵ��
// ʹ�����Լ���Ƶĺ����������ֵ���������ҽ�����������ӡ������
// main() ����������ֵ���ݸ��ú�����

#include <stdio.h>
void printCubic(float x);
int main()
{
	float aFloat;
	scanf("%f", &aFloat);
	printCubic(aFloat);
	
	return 0;
} 

void printCubic(float x)
{
	printf("%.4f", x*x*x);
}
