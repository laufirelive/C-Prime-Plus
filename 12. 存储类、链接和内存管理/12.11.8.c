// 给出函数 make_array() 和 show_array() 的定义使程序完整。函数 make_array() 接受两个参数。
// 第一个是 int 数组的元素个数，第二个是要赋给每个元素的值。
// 函数使用 malloc() 来创建一个适当大小的数组，把每个元素设定为指定的值，并返回一个数组指针。
// 函数 show_array() 以 8 个数一行的格式显示数组内容。

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