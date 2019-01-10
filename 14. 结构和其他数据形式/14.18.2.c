#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int set_month(char str[], int *i_month);
int check_format(int *i_year, int *i_month, int *i_day);

struct Month
{
	int orderID;
	char name[10];
	char short_name[4];
	int days;
};

const struct Month month[12] = 
{
	{1,  "January",		"Jan", 31},
	{2,  "February",	"Feb", 28},
	{3,  "March",		"Mar", 31},
	{4,  "April", 		"Apr", 30},
	{5,  "May", 		"May", 31},
	{6,  "June", 		"Jun", 30},
	{7,  "July", 		"Jul", 31},
	{8,  "August", 		"Aug", 31},
	{9,  "September", 	"Sep", 30},
	{10, "October", 	"Obt", 31},
	{11, "November", 	"Nov", 30},
	{12, "December", 	"Dec", 31},
};

int main(void)
{
	int i_day;
	int i_month;
	int i_year;
	int i_result;
	
	char s_month[10];

	i_day = 0; i_month = 0; i_year = 0; i_result = 0;
	
	printf("Type Day Month Year : ");
	while (scanf("%d%s%d", &i_day, s_month, &i_year) != 3)
		continue;
	
	if (!set_month(s_month, &i_month) || !check_format(&i_year, &i_month, &i_day))
	{
		printf("Format Error.\n");
		exit(1);
	}
	
	for (int i = 0; i < i_month-1; i++)
		i_result += month[i].days;
	
	i_result += i_day;
	
	printf("%d/%d/%d\n%d\n", i_year, i_month, i_day, i_result);
	
	return 0;
}

int is_string_digit(char *str)
{
	if (strspn(str, "0123456789") == strlen(str))
		return 1;
	else
		return 0;
}

int set_month(char str[], int *i_month)
{
	int i;
	int is_string_digit(char *str);
	
	if (is_string_digit(str))
		*i_month = atoi(str);
	else
		for (i = 0; i < 12; i++)
			if (!strcmp(str, month[i].name) || !strcmp(str, month[i].short_name))
			{	
				*i_month = month[i].orderID;
				break;
			}
		
	if (i == 12)
		return 0;	
	else
		return 1;
}

int check_format(int *i_year, int *i_month, int *i_day)
{
	if (*i_month < 1 || *i_month > 12 || *i_year < 1 || *i_day < 1 || *i_day > month[*i_month - 1].days)
		return 0;
	else
		return 1;
}