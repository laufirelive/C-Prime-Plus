// 编写一个transform()函数，它接收4个参数：包含double类型数据的源数组名，double类型的目标数组名，
// 表示数组元素个数的int变量以及一个函数名（或者，等价的指向函数的指针）。transform()函数把指定
// 的函数作用于源数组的每个元素，并将返回值放到目标数组中。例如：

    // transform(source,target,100,sin);

// 这个函数调用把sin(source[0])赋给target[0],等等，共有100个元素。在一个程序中测试该函数，
// 调用 4 次transform()，分别使用math.h函数库中的两个函数以及自己设计的两个合适的函数作为参数。

#include <stdio.h>
#include <math.h>
void transform(double src[], double des[], int count, double (*fun)(double));

int main(int argc, char *argv[])
{
    double source[] = {1, 2, 3, 4, 5, 6, 7, 8};
    double target[8];
    
    transform(source, target, 8, sin);
    
    for (int i = 0; i < 8; i++)
        printf("%-10.2lf", source[i]);
    
    putchar('\n');
    
    for (int i = 0; i < 8; i++)
        printf("%-10.2lf", target[i]);
    
    putchar('\n');
    
    return 0;
}

void transform(double src[], double des[], int count, double (*fun)(double))
{
    for (int i = 0; i < count; i++)
        des[i] = (*fun)(src[i]);
}