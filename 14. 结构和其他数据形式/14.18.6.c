// 一个文本文件中存放着一个棒球队的信息。每一行的数据都是这样排列的：

    // 4 Jessie Joybat 5 2 1 1

    // 第一项是球员号码，为了方便，范围是 0 到 18 .第二项是球员的名，第三项是姓。
// 姓和名都是单个的单词。下一项是官方统计的球员上场次数，紧跟着是击中数、
// 走垒数和跑点数（RBI）。文件可能包括超过一场比赛的数据。因此一个球员可
// 能会有多余一行的数据，而且在不同的行之间有可能有别的球员的数据。写一
// 个程序，把这些数据存储到一个结构数组中。结构中必须含有姓、名、上场次数
// 、击中数、走垒数和跑点数，以及击球平均成功率（稍后计算）。可以使用球员
// 号码作为数组索引。程序应该读到文件末尾，并且应该保存每个球员的累计总和。
// 这个棒球运动中的统计方法是相关的。例如，一次走垒和触垒中的失误并不会记
// 作上场次数，但是这可能产生一个RBI。可是，该程序所要做的只是处理数据文件
// ，而不必关心数据的实际含义。要实现这些功能，最简单的方法是把结构的内容
// 初始化为零值，将文件的数据读入临时变量中，然后把它们加到相应结构的内容
// 中。程序读完文件后，应该计算每个球员的击球平均成功率，并把它保存到相应
// 的结构成员里。计算击球平均成功率是用球员的累积击中数除以上场累计次数；
// 这是个浮点数计算。然后程序要显示每个球员的累计数据，并且对整个时期显示
// 一行综合统计数据。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 18
struct name
{
    char firstname[10];
    char lastname[10];
};

struct player
{
    int id;
    struct name playername;
    int round;
    int hits;
    int walk;
    int RBI;
    float hit_rate;
};

void readPlayerData(FILE *data_source, struct player * arr_player, int len);
void displayPlayer(struct player * arr_player, int len);

int main(int argc, char *argv[])
{
    FILE *player_file;
    struct player arr_player[MAXLEN];
    
    memset(&arr_player, 0, sizeof(arr_player) - 1);
    
    if (argc != 2)
        return 1;
    
    if (!(player_file = fopen(argv[1], "r")))
        printf("Fail on open file.\n");
    
    readPlayerData(player_file, arr_player, MAXLEN);
    displayPlayer(arr_player, MAXLEN);
    
    fclose(player_file);
    
    return 0;
}
void readPlayerData(FILE *data_source, struct player * arr_player, int len)
{
    struct player temp;
    
    char tempID[5];
    char tempRound[5];
    char tempHits[5];
    char tempWalk[5];
    char tempRBI[5];
    
    memset(tempID, '\0', sizeof(temp) - 1);
    
    int ch;
    int i = 0;
    while ((ch = fgetc(data_source)) != EOF && i++ < len)
    {
        ungetc(ch, data_source);
        fscanf(data_source, "%s", tempID);
        fscanf(data_source, "%s", temp.playername.firstname);
        fscanf(data_source, "%s", temp.playername.lastname);
        fscanf(data_source, "%s%s%s%s", tempRound, tempHits, tempWalk, tempRBI);
        
        temp.id = atoi(tempID);
        temp.round = atoi(tempRound);
        temp.hits = atoi(tempHits);
        temp.walk = atoi(tempWalk);
        temp.RBI = atoi(tempRBI);
        temp.hit_rate = (float)temp.hits / temp.round;
        
        arr_player[i-1] = temp;
    }
}

void displayPlayer(struct player * arr_player, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr_player[i].playername.firstname[0] == '\0')
            break;
        
        printf("%d ", arr_player[i].id);
        printf("%s ", arr_player[i].playername.firstname);
        printf("%s ", arr_player[i].playername.lastname);
        printf("%d ", arr_player[i].round);
        printf("%d ", arr_player[i].hits);
        printf("%d ", arr_player[i].walk);
        printf("%d ", arr_player[i].RBI);
        printf("%5.2f\n", arr_player[i].hit_rate); 
    }
}
