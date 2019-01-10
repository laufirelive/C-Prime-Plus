// ABC Main OrderGrocery ���ʼ����ۼ��� 1.25 ��Ԫ/������˵��ۼ��� 0.65 ��Ԫ/�������ܲ����ۼ��� 0.89 ��Ԫ/����
// ������������֮ǰ������Ϊ 100 ��Ԫ�Ķ����ṩ 5% �Ĵ����Żݡ��� 5 �������µĶ�����ȡ 3.50 ��Ԫ�������װж���ã�
// ���� 5 �������� 20 ���Ķ�����ȡ 10.00 ��Ԫ�������װж���ã�20 �������ϵ����䣬�� 8 ��Ԫ�Ļ�����ÿ������ 0.1 ��Ԫ��
// ��д������ѭ����ʹ�� switch ��䣬�Ա������ a ����Ӧ�����û���������ĳ��ʼ�������b Ϊ��˵İ�����cΪ���ܲ��İ�����
// �� q �����û��˳��������̡�Ȼ���������ܷ��á��ۿۺ�������ã����������ѵĻ������Լ�������������Ӧ����ʾ���еĹ�����Ϣ��
// ÿ���ķ��á������İ������ö���ÿ���߲˵ķ��á��������ܷ��á��ۿۣ�����еĻ�����������ã��Լ����з��õ�������

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
	
	puts("a. ���ʼ�			1.25 ��Ԫ/��");
	puts("b. ���				1.25 ��Ԫ/��");
	puts("c. ���ܲ�			0.89 ��Ԫ/��");
	
	while (1)
	{
		printf("ѡ�����q���㣩��");
		while (scanf("%c", &seletion) && seletion == '\n');
		switch(seletion)
		{
			case 'q' : 
				goto STOP;
			case 'a' : 
				printf("���ʼ�(��) : ");
				while (scanf("%d", &pounds_artichoke) && pounds_artichoke < 0); break;
			case 'b' : 
				printf("���(��) : ");
				while (scanf("%d", &pounds_beet) && pounds_beet < 0); break;
			case 'c' :
				printf("���ܲ�(��) : ");
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
	
	puts("\n�ܼƣ�");
	printf("���ʼ�	1.25 ��Ԫ/��	�ѹ���%d��	�۸�%.2lf\n", pounds_artichoke, price_artichoke);
	printf("���	1.25 ��Ԫ/��	�ѹ���%d��	�۸�%.2lf\n", pounds_beet, price_beet);
	printf("���ܲ�	1.25 ��Ԫ/��	�ѹ���%d��	�۸�%.2lf\n", pounds_carrot, price_carrot);
	printf("�ܼ� : 	%.2lf$		�ۿۣ�%.2lf$	�˷ѣ�%.2lf$\n�ܷ��ã�%.2lf$\n\n", price_total, discount, price_carriage, price);
	
	return 0;
}
