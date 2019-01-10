// Ϊ��ʹ�����嵥 9.8 �еĺ��� to_binary() ��һ�㻯���������µĺ��� to_base_n() ��ʹ�õڶ���������
// �Ҳ����ķ�Χ�� 2 �� 10 ��Ȼ������º��������һ�������ڵڶ��������涨�Ľ������µ���ֵ�����
// ���磬to_base_n(129, 8) ���������� 201 ��Ҳ���� 129 �İ˽�����ֵ��
// �����һ�������ĳ����жԸú������в��ԡ�

#include <stdio.h>
void to_base_n(unsigned long n, int target);
int main()
{
	to_base_n(12, 2);
	putchar('\n');
	to_base_n(12, 8);
	putchar('\n');
	to_base_n(12, 10);
	putchar('\n');
	to_base_n(12, 4);
	putchar('\n');
	return 0;
} 

void to_base_n(unsigned long n, int target)
{
	if (target < 2 || target > 10)
		return;
	int r;
	r = n % target;
	if (n >= target)
		to_base_n(n/target, target);
	
	putchar('0' + r);
	
	return;
}