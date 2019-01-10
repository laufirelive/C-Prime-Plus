// 写一个程序，满足下列要求：
    // a. 外部定义一个 name 结构模板，它含有 2 个成员； 
       // 一个字符串用于存储名字，另一个字符串用于存储姓氏。
    // b. 外部定义一个 student 结构模板，它含有 3 个成员；
       // 一个 name 结构，一个存放 3 个浮点数分数的 grade 数组，
       // 以及一个存放着 3 个分数的平均分变量。
    // c. 使 main() 函数声明一个具有 CSIZE(CSIZE = 4) 个 student 
       // 结构的数组，并随意初始化这些结构的名字部分。
       // 使用函数来执行 d、e、f以及 g 部分所描述的任务。
    // d. 请求用户输入学生姓名和分数，以交互地获取每个学生的成绩。
       // 将分数放到相应结构 grade 数组成员中。您可以自主选择在 
       // main() 或一个函数中实现这个循环。
    // e. 为每个结构计算平均分，并把这个值赋给适合的成员。
    // f. 输出每个结构中的信息。
    // g. 输出结构中每个数值成员的班级平均分。
    
#include <stdio.h>
#define CSIZE 4
struct Name 
{
  char firstname[16];
  char lastname[16];
};

struct Student 
{
    struct Name name;
    float grade[3];
    float ave;
};

void initStudent(struct Student *L, int len);
void setInfo(struct Student *L, int len);
void setAve(struct Student *L, int len);
void displayInfo(struct Student *L, int len);
float getClassAve(struct Student *L, int len);

int main(void)
{
    struct Student student[CSIZE];
    initStudent(student, CSIZE);
    setInfo(student, CSIZE);
    setAve(student, CSIZE);
    displayInfo(student, CSIZE);
    printf("Class Average Score : %f\n", getClassAve(student, CSIZE));
    
}

void initStudent(struct Student *L, int len)
{
    for (int i = 0; i < len; i++)
    {
        L[i].name.firstname[0] = '\0';
        L[i].name.lastname[0] = '\0';
        for (int j = 0; j < 3; j++)
            L[i].grade[j] = 0;
        L[i].ave = 0;
    }
}

void setInfo(struct Student *L, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Index : %d , FirstName : ", i+1);
        while (!scanf("%s", L[i].name.firstname))
            while (getchar() != '\n');
        printf("Index : %d , LastName : ", i+1);
        while (!scanf("%s", L[i].name.lastname))
            while (getchar() != '\n');
        for (int j = 0; j < 3; j++)
        {
            printf("Index : %d , Lesson %d Grade : ", i+1, j+1);
            scanf("%f", &L[i].grade[j]);
        }
    }
}

void setAve(struct Student *L, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < 3; j++)
            L[i].ave += L[i].grade[j];
        
        L[i].ave /= 3;
    }
}

void displayInfo(struct Student *L, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("Index : %d , Name : %s %s\t\t", i+1, L[i].name.firstname, L[i].name.lastname);
        printf("Lesson Grade : ");
        
        for (int j = 0; j < 3; j++)
            printf("%.2f\t", L[i].grade[j]);
        
        printf("\tAverage : %f\n", L[i].ave);
    }
}

float getClassAve(struct Student *L, int len)
{
    float sum = 0;
    
    for (int i = 0; i < len; i++)
        sum += L[i].ave;
    
    return sum/3;
}