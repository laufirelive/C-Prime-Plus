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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12.11.7_diceroll.h"

int main(void)
{
	int sets;
	int sides, dice;
	
	srand((unsigned int)time(0));
	printf("Enter the number of sets : enter q to stop\n");
	
	while (1)
	{
		while (scanf("%d", &sets) != 1 || sets < 1)
			if (getchar() == 'q') 
				return 0;

		printf("How many sides and how many dice?\n");
		while (scanf("%d%d", &sides, &dice) != 2 || (sides < 1 || dice < 1))
			getchar();
		
		set_roll(sides, dice);
		
		printf("Here are %d sets of %d %d-sides throws.\n", sets, dice, sides);
		roll(sets);
		
		printf("How many sets? Enter q to stop.\n");
	}
	
	return 0;
}
