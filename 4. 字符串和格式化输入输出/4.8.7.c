// ��дһ������Ҫ���û�������ʻ��Ӣ�������������͵ļ�������
// ����Ӧ�ü������ʾ����ÿ����������ʻ��Ӣ��������ʾ��ʽ����С�����Ҳ���ʾһ�����֡�
// Ȼ�󣬸��� 1 ����Լ���� 3.785 ����1 Ӣ��Լ���� 1.609 ����Ĺ�����Ӧ�ð�ÿ����Ӣ
// ����ת����ÿ100�����������ŷ��ͨ�õ�ȼ�����ı�ʾ����������ʾ�������ʾ��ʽ��С��
// ���Ҳ���ʾһ�����֣���ע�⣬������������ÿ��λ�������ĵ�ȼ��������ŷ�޷�������ÿ��
// λȼ�ϵ���ʻ���룩���÷��ų�����ʾ����ת��ϵ����ʹ�� const �� #define ����

#include <stdio.h>
#define LITRE 3.785
#define KILOMETER 1.609

int main()
{
	float miles;
	float gallons;

	float kilometers;
	float litres;
	
	printf("miles : ");
	scanf("%f", &miles);
	printf("gallons : ");
	scanf("%f", &gallons);
	
	kilometers = miles * KILOMETER;
	litres = gallons * LITRE;
	
	printf("%.1f Miles for a Gallons\n", miles / gallons);
	printf("%.1f L for 100 KM\n", (litres / kilometers) * 100);
	return 0;
} 
