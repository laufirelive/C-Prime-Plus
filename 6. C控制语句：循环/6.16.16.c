// Chuckie Lucky Ӯ�� 100 ����Ԫ������������һ��ÿ��Ӯ�� 8% ���˻�����ÿ������һ�죬 Chuckie ȡ�� 10 ����Ԫ��
// ��дһ�����򣬼�����Ҫ������ Chuckie �ͻ���������˻���

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
