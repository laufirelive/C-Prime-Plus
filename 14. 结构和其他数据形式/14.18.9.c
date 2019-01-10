// 巨人航空公司（见第八题）需要另一架飞机（同样容量），并使它每天服务4个航班（航班102、311、444和519）。
// 把程序扩展为能够处理4个航班。有一个顶层菜单可供选择航班和退出。选择了一个特定的航班，就会调出和第八题
// 相似的菜单，但要加上一个新项：确认一个座位分配；并用一个退回顶层菜单的选项代替退出选项。每个显示要指明
// 现在正在处理哪个航班。座位分配显示必须要指明确认状态。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#define MAXSEATS 12

struct customer
{
    char firstname[10];
    char lastname[10];
};

struct seat
{
    int id;
    int available;
    struct customer customer;
};

struct flight
{
    int id;
    struct seat seats[MAXSEATS];
};

typedef struct flight FLIGHT;
typedef struct seat SEAT;

//flight
void initPlane(FLIGHT * flights, int len);
char flightMenu();
//seats
char seatsMenu();
void SecLevelFun(FLIGHT * flights, int len, int flightId);
void showNumberEmptySeats(SEAT *seats, int len);
void showListEmptySeats(SEAT *seats, int len);
void initSeats(SEAT *seats, int len, int flightId);
void Save(SEAT *seats, int len, int flightId);
void displayListAlphabetically(SEAT *seats, int len);
void assignCustomer(SEAT *seats, int len);
void deleteCustomer(SEAT *seats, int len);

int main(void)
{
    FLIGHT flights[4];
    initPlane(flights, 4);
    
    for (;;)
    {
        switch(flightMenu())
        {
            case 'a' :  SecLevelFun(flights, 4, 102); break;
            case 'b' :  SecLevelFun(flights, 4, 311); break;
            case 'c' :  SecLevelFun(flights, 4, 444); break;
            case 'd' :  SecLevelFun(flights, 4, 519); break;
            case 'e' : return 0; break;
        }
    }

    return 0;
}

void initPlane(FLIGHT * flights, int len)
{
    
    flights[0].id = 102;
    flights[1].id = 311;
    flights[2].id = 444;
    flights[3].id = 519;
    
    for (int i = 0; i < len; i++)
    {
        memset(flights[i].seats, 0, sizeof(flights[i].seats) - 1);
        initSeats(flights[i].seats, MAXSEATS, flights[i].id);
    }
}

char flightMenu()
{
    char selection;
    puts("To choose a function,enter its letter label:");
    puts("a) Flight 102");
    puts("b) Flight 311");
    puts("c) Flight 444");
    puts("d) Flight 519");
    puts("e) Quit");
    puts("");
    
    while ((selection = getch()) < 'a' || selection > 'e')
        continue;
    
    return selection;
}

void SecLevelFun(FLIGHT * flights, int len, int flightId)
{  
    int i;
    
    for (i = 0; i < len; i++)
        if (flights[i].id == flightId)    
    
    while (1)
    {
        printf("flight %d\n", flightId);
        switch(seatsMenu())
        {
            case 'a' : showNumberEmptySeats(flights[i].seats, MAXSEATS); break;
            case 'b' : showListEmptySeats(flights[i].seats, MAXSEATS); break;
            case 'c' : displayListAlphabetically(flights[i].seats, MAXSEATS); break;
            case 'd' : assignCustomer(flights[i].seats, MAXSEATS); Save(flights[i].seats, MAXSEATS, flightId); break;
            case 'e' : deleteCustomer(flights[i].seats, MAXSEATS); Save(flights[i].seats, MAXSEATS, flightId); break;
            case 'f' : Save(flights[i].seats, MAXSEATS, flightId); return; break;
        }
    }
    
}

char seatsMenu()
{
    char selection;
    
    puts("To choose a function,enter its letter label:");
    puts("a) Show number of empty seats");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assign a customer to a seat assignment");
    puts("e) Delete a seat assignment");
    puts("f) Quit");
    puts("");
    
    while ((selection = getch()) < 'a' || selection > 'f')
        continue;
    
    return selection;
}

void initSeats(SEAT *seats, int len, int flightId)
{
    FILE *data_stream;
    
    char c_flightId[10];
    char filename[30];
    
    memset(c_flightId, 0, sizeof(c_flightId) - 1);
    memset(filename, 0, sizeof(filename) - 1);
    
    strcpy(filename, "seat");
    itoa(flightId, c_flightId, 10);
    strcat(filename, c_flightId);
    strcat(filename, ".dat");
    
    int count = 0;
    
    if ((data_stream = fopen(filename, "rb+")))
    {
        for (int i = 0; i < len; i++)
            if (fread(seats + i, sizeof(SEAT), 1, data_stream) && seats[i].available == 0)
                count++;
            
        printf("Loaded %d records from %s\n", count, filename);
    }
    else
    {
        for (int i = 0; i < MAXSEATS; i++)
        {
            seats[i].id = i+1;
            seats[i].available = 1;
        }
    }
    fclose(data_stream);
}

void Save(SEAT *seats, int len, int flightId)
{
    FILE *data_stream;
    
    char c_flightId[10];
    char filename[30];
    
    memset(c_flightId, 0, sizeof(c_flightId) - 1);
    memset(filename, 0, sizeof(filename) - 1);
    
    strcpy(filename, "seat");
    itoa(flightId, c_flightId, 10);
    strcat(filename, c_flightId);
    strcat(filename, ".dat");
    
    
    if ((data_stream = fopen(filename, "wb")) == NULL)
    {
        printf("Can't create %s\n", filename);
        return ;
    }
    
    fwrite(seats, sizeof(SEAT), len, data_stream);
    printf("Saved to %s\n", filename);
    
    fclose(data_stream);
}

void displayListAlphabetically(SEAT * const seats, int len)
{
    struct seat * p_seats[len];
    int avai_count = 0;
    for (int i = 0; i < len; i++)
        if (seats[i].available == 0)
        {
            p_seats[avai_count++] = &seats[i];
        }
    
    for (int i = 1; i < avai_count; i++)
        for (int j = i; j < avai_count; j++)
        {
            char left = toupper(p_seats[j-1]->customer.firstname[0]);
            char right = toupper(p_seats[j]->customer.firstname[0]);
            if (left > right)
            {
                struct seat * temp = p_seats[j-1];
                p_seats[j-1] = p_seats[j];
                p_seats[j] = temp;
            }
        }
    
    putchar('\n');
    
    for (int i = 0; i < avai_count; i++)
    {
        printf("ID : %03d Customer : %s %s\n", p_seats[i]->id, p_seats[i]->customer.firstname, p_seats[i]->customer.lastname);
    }
    putchar('\n');
}

void showListEmptySeats(SEAT *seats, int len)
{
    putchar('\n');
    
    for (int i = 0; i < len; i++)
        if (seats[i].available)
            printf("ID : %03d is Available\n", seats[i].id);
        
    putchar('\n');    
}

void showNumberEmptySeats(SEAT *seats, int len)
{
    putchar('\n');
    
    int count = 0;
    for (int i = 0; i < len; i++)
        if (seats[i].available)
            count++;
    
    printf("Available Seats : %03d\n", count);
    putchar('\n');    
}

void assignCustomer(SEAT *seats, int len)
{
    int pickID = -1;
    
    putchar('\n');
    
    do
    {
        printf("Which seat do you prefer (0 to return) : ");
        while (scanf("%d", &pickID) != 1 || (pickID < 0 || pickID > MAXSEATS))
            while(getchar() != '\n') continue;
        
        if (pickID == 0)
        {
            putchar('\n');
            return ;
        }
        
        if (seats[pickID - 1].available)
        {
            printf("Enter your FULL NAME: ");
            while (scanf("%s%s", seats[pickID - 1].customer.firstname, seats[pickID - 1].customer.lastname) != 2)
                while(getchar() != '\n') continue;
  
            seats[pickID - 1].available = 0;
            
            putchar('\n');
            printf("ID : %03d Customer : %s %s Assigned.\n", seats[pickID - 1].id, seats[pickID - 1].customer.firstname, seats[pickID - 1].customer.lastname);
            putchar('\n');
            return ;
        }
        else
            printf("ID : %03d had been taken, try again.\n\n", seats[pickID - 1].id);
    }while (1);
}

void deleteCustomer(SEAT *seats, int len)
{
    int pickID = -1;
    
    putchar('\n');
    
    do
    {
        printf("Which seat do you prefer (0 to return) : ");
        while (scanf("%03d", &pickID) != 1 || (pickID < 0 || pickID > MAXSEATS))
            while(getchar() != '\n') continue;
        
        if (pickID == 0)
        {
            putchar('\n');
            return ;
        }
        
        if (!seats[pickID - 1].available)
        {
            seats[pickID - 1].available = 1;
            putchar('\n');
            return ;
        }
        else
            printf("ID : %03d is available, try again.\n\n", seats[pickID - 1].id);
        
    }while (1);
}

