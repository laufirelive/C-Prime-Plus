// ��дһ�����򣬸ó�������������ʾ�����嵥 12.13 �����֮�������۵��޸İ���������ͬ���֡�Ҳ����˵�����Ӧ������������

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

static int Side = 6;
static int Dice = 1;

int set_roll(int side, int dice);
void roll(int sets);