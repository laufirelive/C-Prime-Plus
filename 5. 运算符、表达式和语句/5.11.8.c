// 编写一个程序，该程序要求用户输入一个华氏温度。
// 程序以 double 类型读入温度值，并将它作为一个参数传递给用户提供的函数 Temperatures()。
// 该函数将计算相应的摄氏温度和绝对温度，并以小数点右边有两位数字的精度显示这三种温度。
// 它应该用每个值所代表的温度刻度来表示着 3 个值。下面是将华氏温度转换成摄氏温度的方程：

// Fahrenheit = 1.8 * Celsius + 32.0

// 通常用在科学上的绝对温度刻度是 0 代表绝对零，是可能温度的下界。
// 下面是将摄氏温度转换成绝对温度的方程 : 

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
