// Chuckie Lucky 赢了 100 万美元，他把它存入一个每年赢得 8% 的账户。在每年的最后一天， Chuckie 取出 10 万美元。
// 编写一个程序，计算需要多少年 Chuckie 就会清空他的账户。

#include <stdio.h>

int main()
{
	int year;
	double chuckie_bank = 1000000;

	for (year = 0; chuckie_bank / 100000 >= 1; year++)
	{
		printf("In %d year, Chuckie Got %.4lf$, ", year + 1, chuckie_bank);
		chuckie_bank -= 100000;
		printf("After he've taken out the money. He got %.4lf$\n", chuckie_bank);
		chuckie_bank *= 1.08;
	}
	printf("In %d year, Chuckie Got %.4lf$, ", year + 1, chuckie_bank);
	chuckie_bank -= chuckie_bank;
	printf("After he've taken out the money. He got %.4lf$\n", chuckie_bank);
	
	printf("After %d year, Chuckie got no money in the bank.\n", year + 1);
} 
