// 为了使程序清单 9.8 中的函数 to_binary() 更一般化，可以在新的函数 to_base_n() 中使用第二个参数，
// 且参数的范围从 2 到 10 。然后，这个新函数输出第一个参数在第二个参数规定的进制数下的数值结果。
// 例如，to_base_n(129, 8) 的输出结果是 201 ，也就是 129 的八进制数值。
// 最后在一个完整的程序中对该函数进行测试。

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