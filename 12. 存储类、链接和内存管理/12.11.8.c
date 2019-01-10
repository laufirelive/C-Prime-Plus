// �������� make_array() �� show_array() �Ķ���ʹ�������������� make_array() ��������������
// ��һ���� int �����Ԫ�ظ������ڶ�����Ҫ����ÿ��Ԫ�ص�ֵ��
// ����ʹ�� malloc() ������һ���ʵ���С�����飬��ÿ��Ԫ���趨Ϊָ����ֵ��������һ������ָ�롣
// ���� show_array() �� 8 ����һ�еĸ�ʽ��ʾ�������ݡ�

#include <stdio.h>
#include <malloc.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
	int *pa;
	int size;
	int value;
	
	printf("Enter the number of elements : ");
	scanf("%d", &size);
	while (size > 0)
	{
		printf("Enter the initalizeation value : ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements (<1 to quit) : ");
		scanf("%d", &size);
	}
	printf("Done.\n");
	return 0;
}

int * make_array(int elem, int val)
{
	int *p_temp;
	
	p_temp = (int *)malloc(sizeof(int) * elem);
	if (!p_temp)
		return NULL;
	
	for (int i = 0; i < elem; i++)
		p_temp[i] = val;
	
	return p_temp;
}

void show_array(const int ar[], int n)
{
	int i ;
	
	for (i = 0; i < n; i++)
	{
		printf("%-5d", ar[i]);
		
		if ((i+1) % 8 == 0)
			putchar('\n');
	}
	
	if (i % 8 != 0)
		putchar('\n');
	
	return ;
}