// Daphne 以 10% 的单利率投资了 100 美元（也就是说，每年投资赢得的利息等于原始投资的 10% ）。
// Deirdre 则以每年 5% 的复合利息投资了 100 美元（也就是说，利息是当前结余的 5%，其中包括以前的利息）。
// 编写一个程序，计算需要多少年 Deirdre 的投资额才会超过 Daphne，并且显示出到那时两个人的投资额。

#include <stdio.h>

int main()
{
	int year;
	double daphne_money = 100;
	double deirdre_money = 100;

	for (year = 0; deirdre_money <= daphne_money; year++)
	{
		daphne_money += 100 * 0.1;
		deirdre_money *= 1.05;
	}
	printf("After %d Years.\nDeirdre got %.3lf Dollars.\nDaphne  got %.3lf Dollars\n", year+1, deirdre_money, daphne_money);
} 
