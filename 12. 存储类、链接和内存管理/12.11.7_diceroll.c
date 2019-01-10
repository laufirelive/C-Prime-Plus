// 编写一个程序，该程序与我们在显示程序清单 12.13 的输出之后所讨论的修改版程序具有相同表现。也就是说，输出应像下面这样：

	// Enter the number of sets : enter q to stop
	// 18
	// How many sides and how many dice?
	// 6 3
	// Here are 18 sets of 3 6-sides throws.
		// 12 10 6 9 8 14 8 15 9 14 12 17 11 7 19
		// 13 8 14
	// How many sets? Enter q to stop.
	// q

#include "12.11.7_diceroll.h"

int set_roll(int side, int dice)
{
	if (side < 1 || dice < 1)
		return 0;
	
	Side = side;
	Dice = dice;
	
	return 1;
}

void roll(int sets)
{	
	int i, total;
	
	putchar('\t');
	
	srand((unsigned int)time(0));
	
	for (i = 1; i <= sets; i++)
	{
		total = 0;
		
		for (int j = 1; j <= Dice; j++)
			total += rand() % Side + 1;
		
		printf("%-3d", total);
		
		if (i % 15 == 0)
		{
			putchar('\n');
			putchar('\t');
		}
			
	}
	
	if ((i-1) % 15 != 0)
		putchar('\n');
	
}