// 1988 �� United States Federal Tax Schedule �ǽ���������ġ�����Ϊ 4 �࣬ÿ���������ȼ�����������ժҪ����Ԫ��ΪӦ��˰�����롣

	// ����				˰��
	// ����				ǰ17��850��Ԫ�� 15%���������ְ� 28%
	// ����				ǰ23��900��Ԫ�� 15%���������ְ� 28%
	// �ѻ飬����		ǰ29��750��Ԫ�� 15%���������ְ� 28%
	// �ѻ飬����		ǰ14��875��Ԫ�� 15%���������ְ� 28%

// ���磬�� 20 000 ��ԪӦ��˰����ĵ����Ӷ���Ͷ���Ӧ��˰�� 0.15 * 17 850 + 0.28 * (20 000 - 17850)��
// ��дһ���������û�ָ��˰�������Ӧ��˰���룬Ȼ�����˰��ʹ��ѭ���Ա��û����Զ�����롣

#include <stdio.h>
#define STANDARD_RATE 0.15
#define OVER_RATE 0.28

int main()
{
	int selection;
	int salary;
	int taxLevel;
	
	puts("����					˰��");
	puts("1. ����				ǰ17��850��Ԫ�� 15%���������ְ� 28%");
	puts("2. ����				ǰ23��900��Ԫ�� 15%���������ְ� 28%");
	puts("3. �ѻ飬����			ǰ29��750��Ԫ�� 15%���������ְ� 28%");
	puts("4. �ѻ飬����			ǰ14��875��Ԫ�� 15%���������ְ� 28%");
	puts("5. �˳�");
	
	while (1)
	{
		while (scanf("%d", &selection) && (selection > 5 || selection < 1))
			printf("Wrong Type\n");
		
		switch (selection)
		{
			case 1 : taxLevel = 17850; break;
			case 2 : taxLevel = 23900;	break;
			case 3 : taxLevel = 29750;	break;
			case 4 : taxLevel = 14875;	break;
			case 5 : return 0;
		}
		
		printf("Ӧ��˰���� �� ");
		while (scanf("%d", &salary) && salary < 0);
		
		if (salary - taxLevel <= 0)
			printf("���˰��Ϊ : %.2lf$\n", salary * STANDARD_RATE);
		else
			printf("���˰��Ϊ : %.2lf$\n", STANDARD_RATE * taxLevel + OVER_RATE * (salary - taxLevel));
	}
	
	return 0;
}
