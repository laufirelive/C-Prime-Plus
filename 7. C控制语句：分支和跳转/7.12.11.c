// ABC Main OrderGrocery 朝鲜蓟的售价是 1.25 美元/磅，甜菜的售价是 0.65 美元/磅，胡萝卜的售价是 0.89 美元/磅。
// 在添加运输费用之前，他们为 100 美元的订单提供 5% 的打折优惠。对 5 磅或以下的订单收取 3.50 美元的运输和装卸费用；
// 超过 5 磅而不足 20 磅的定单收取 10.00 美元的运输和装卸费用；20 磅或以上的运输，在 8 美元的基础上每磅加收 0.1 美元。
// 编写程序，在循环中使用 switch 语句，以便对输入 a 的响应是让用户输入所需的朝鲜蓟磅数，b 为甜菜的磅数，c为胡萝卜的磅数，
// 而 q 允许用户退出订购过程。然后程序计算总费用、折扣和运输费用（如果有运输费的话），以及总数。随后程序应该显示所有的购买信息：
// 每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，如果有的话加上运输费用，以及所有费用的总数。

#include <stdio.h>

#define 	PRICE_ARTICHOKE 	1.25
#define	 	PRICE_BEET 			0.65
#define 	PRICE_CARROT 		0.89
#define		DISCOUNT_PRICE		100
#define		DISCOUNT_RATE		0.05

int main()
{
	int pounds_artichoke = 0;
	int pounds_beet = 0;
	int pounds_carrot = 0;
	int pounds_total;
	
	double discount = 0;
	
	double price_artichoke;
	double price_beet;
	double price_carrot;
	double price_total;
	double price_carriage;
	double price;
	
	char seletion = '\0';
	
	puts("a. 朝鲜蓟			1.25 美元/磅");
	puts("b. 甜菜				1.25 美元/磅");
	puts("c. 胡萝卜			0.89 美元/磅");
	
	while (1)
	{
		printf("选项（输入q结算）：");
		while (scanf("%c", &seletion) && seletion == '\n');
		switch(seletion)
		{
			case 'q' : 
				goto STOP;
			case 'a' : 
				printf("朝鲜蓟(磅) : ");
				while (scanf("%d", &pounds_artichoke) && pounds_artichoke < 0); break;
			case 'b' : 
				printf("甜菜(磅) : ");
				while (scanf("%d", &pounds_beet) && pounds_beet < 0); break;
			case 'c' :
				printf("胡萝卜(磅) : ");
				while (scanf("%d", &pounds_carrot) && pounds_carrot < 0); break;
		}
	}
	
STOP :

	price_artichoke 	=		pounds_artichoke * PRICE_ARTICHOKE;
	price_beet 			= 		pounds_beet * PRICE_BEET;
	price_carrot		=		pounds_carrot * PRICE_CARROT;
	price_total			=		price_artichoke + price_beet + price_carrot;
	
	if (price_total >= DISCOUNT_PRICE)
		discount = price_total * DISCOUNT_RATE;
	
	pounds_total = pounds_artichoke + pounds_beet + pounds_carrot;
	
	if (pounds_total <= 5)
		price_carriage = 3.5;
	else if (pounds_total < 20)
		price_carriage = 10;
	else if (pounds_total >= 20)
		price_carriage = 8 + pounds_total * 0.1;
	
	price = price_total - discount + price_carriage;
	
	puts("\n总计：");
	printf("朝鲜蓟	1.25 美元/磅	已购：%d磅	价格：%.2lf\n", pounds_artichoke, price_artichoke);
	printf("甜菜	1.25 美元/磅	已购：%d磅	价格：%.2lf\n", pounds_beet, price_beet);
	printf("胡萝卜	1.25 美元/磅	已购：%d磅	价格：%.2lf\n", pounds_carrot, price_carrot);
	printf("总计 : 	%.2lf$		折扣：%.2lf$	运费：%.2lf$\n总费用：%.2lf$\n\n", price_total, discount, price_carriage, price);
	
	return 0;
}
