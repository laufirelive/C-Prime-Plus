// 编写一个程序，用指向函数的指针数组执行菜单。例如，在菜单中选择 a 会激活由数组第一个元素指向的函数。

#include <stdio.h>
#include <conio.h>
void fun0();
void fun1();
void fun2();
void fun3();
void fun4();

int main(int argc, char *argv[])
{

    void (*p_fun[5])();
    p_fun[0] = fun0;
    p_fun[1] = fun1;
    p_fun[2] = fun2;
    p_fun[3] = fun3;
    p_fun[4] = fun4;

    for (;;)
    {
        int selection;
        while ((selection = getch()) < 'a' || selection > 'f')
            continue;
        
        switch(selection)
        {
            case 'a' : p_fun[0](); break;
            case 'b' : (*(p_fun + 1))(); break;
            case 'c' : p_fun[2](); break;
            case 'd' : p_fun[3](); break;
            case 'e' : p_fun[4](); break;
            case 'f' : return 0; break;
        }
    }
}

void fun0()
{
    puts("Function 1");
}

void fun1()
{
    puts("Function 2");
}

void fun2()
{
    puts("Function 3");
}

void fun3()
{
    puts("Function 4");
}

void fun4()
{
    puts("Function 5");
}
