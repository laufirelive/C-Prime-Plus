// ��дһ�����򣬸ó���Ҫ���û�����һ�������¶ȡ�
// ������ double ���Ͷ����¶�ֵ����������Ϊһ���������ݸ��û��ṩ�ĺ��� Temperatures()��
// �ú�����������Ӧ�������¶Ⱥ;����¶ȣ�����С�����ұ�����λ���ֵľ�����ʾ�������¶ȡ�
// ��Ӧ����ÿ��ֵ��������¶ȿ̶�����ʾ�� 3 ��ֵ�������ǽ������¶�ת���������¶ȵķ��̣�

// Fahrenheit = 1.8 * Celsius + 32.0

// ͨ�����ڿ�ѧ�ϵľ����¶ȿ̶��� 0 ��������㣬�ǿ����¶ȵ��½硣
// �����ǽ������¶�ת���ɾ����¶ȵķ��� : 

// Kelvin = Celsius + 273.16

#include <stdio.h>

void Temperatures(double Celsius);

int main()
{
	double Ddegrees;
	scanf("%lf", &Ddegrees);
	Temperatures(Ddegrees);
	
	return 0;
} 

void Temperatures(double Celsius)
{
	double Fahrenheit = 1.8 * Celsius + 32.0;
	double Kelvin = Celsius + 273.16;
	
	printf("Celsius : %.2lf Degrees\n", Celsius);
	printf("Fahrenheit : %.2lf Degrees\n", Fahrenheit);
	printf("Kelvin : %.2lf Degrees\n", Kelvin);
}
