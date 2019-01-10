// 修改程序清单 8.4 中的猜测程序，使其使用更智能的猜测策咯。例如，程序最初猜 50 ，让其询问用户该猜测值是大、小还是正确。
// 如果猜测值小，则令下一次猜测值为 50 和 100 的中值，也就是 75 。如果 75 大，则下一次猜测值为 75 和 50 的中值，等等。
// 使用这种二分搜索（binary search）策略，起码如果用户没有欺骗，该程序很快会获得正确答案。

#include <stdio.h>

int main()
{
	char temp;
	int guess;
	int max = 100;
	int min = 0;
	
	guess = min + max / 2;
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong\n");
	printf("Uh...is your number %d?\n", guess);
	
	while ((temp = getchar()) == '\n') ;
	
	while (temp != 'y')
	{
		printf("is my guess too high?\n");
		
		while ((temp = getchar()) == '\n');
		
		if (temp == 'y')
			max = guess - 1;
		else
			min = guess + 1;
		
		guess = (min + max) / 2;
		
		printf("Well, then, is it %d?\n", guess);
		while ((temp = getchar()) == '\n') ;
	}
	printf("I knew I could do it!\n");
} 
