// Daphne �� 10% �ĵ�����Ͷ���� 100 ��Ԫ��Ҳ����˵��ÿ��Ͷ��Ӯ�õ���Ϣ����ԭʼͶ�ʵ� 10% ����
// Deirdre ����ÿ�� 5% �ĸ�����ϢͶ���� 100 ��Ԫ��Ҳ����˵����Ϣ�ǵ�ǰ����� 5%�����а�����ǰ����Ϣ����
// ��дһ�����򣬼�����Ҫ������ Deirdre ��Ͷ�ʶ�Żᳬ�� Daphne��������ʾ������ʱ�����˵�Ͷ�ʶ

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
