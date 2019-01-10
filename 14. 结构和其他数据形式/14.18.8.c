// 巨人航空公司的机群由作为容量为12的飞机组成。飞机每天飞行一个航班。按照下面的功能，写一个座位预定程序：
// a.程序使用一个含12个结构的数组。每个结构要包括一个用于标识作为的编号、一个表示座位是否已经分配出去的标记、座位预订人的姓和座位预订人的名。
// b.程序显示下面的菜单：
    // To choose a function,enter its letter label:
    // a) Show number of empty seats
    // b) Show list of empty seats
    // c) Show alphabetical list of seats
    // d) Assign a customer to a seat assignment
    // e) Delete a seat assignment
    // f) Quit
// c. 程序应能执行菜单所给出的功能。选择 d) 和 e) 需要额外的输入，每个选项都应当允许用户终止输入。
// d. 执行完一个特定的功能之后，程序再次显示菜单，除非选择了 f)。
// e. 每次运行程序都把数据保存到一个文件中。当程序再次运行时，首先从文件中载入数据（如果有的话）。
#include <stdio.h>
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

typedef struct seat SEAT;

char Menu();
void showNumberEmptySeats(SEAT *seats, int len);
void showListEmptySeats(SEAT *seats, int len);
void initSeats(SEAT *seats, int len);
void Save(SEAT *seats, int len);
void displayListAlphabetically(SEAT *seats, int len);
void assignCustomer(SEAT *seats, int len);
void deleteCustomer(SEAT *seats, int len);

int main(void)
{
    SEAT seats[MAXSEATS];
    memset(seats, 0, sizeof(seats) - 1);
    initSeats(seats, MAXSEATS);
    
    while (1)
    {
        switch(Menu())
        {
            case 'a' : showNumberEmptySeats(seats, MAXSEATS); break;
            case 'b' : showListEmptySeats(seats, MAXSEATS); break;
            case 'c' : displayListAlphabetically(seats, MAXSEATS); break;
            case 'd' : assignCustomer(seats, MAXSEATS); Save(seats, MAXSEATS); break;
            case 'e' : deleteCustomer(seats, MAXSEATS); Save(seats, MAXSEATS); break;
            case 'f' : Save(seats, MAXSEATS); return 0; break;
        }
    }
    
    return 0;
}

char Menu()
{
    char selection;
    puts("To choose a function,enter its letter label:");
    puts("a) Show number of empty seats");
    puts("b) Show list of empty seats");
    puts("c) Show alphabetical list of seats");
    puts("d) Assign a customer to a seat assignment");
    puts("e) Delete a seat assignment");
    puts("f) Quit");
    
    while ((selection = getch()) < 'a' || selection > 'f')
        continue;
    
    return selection;
}

void initSeats(SEAT *seats, int len)
{
    FILE *data_stream;
    char *filename = "seat.dat";
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

void Save(SEAT *seats, int len)
{
    FILE *data_stream;
    char *filename = "seat.dat";
    
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

