//修改程序清单 14.2 中的书目列表程序，使它首先按照输入的顺序输出图书的描述，然后按照标题的字母升序输出图书的描述，
// 最后按照 value 值升序输出图书的描述。

#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS	100


struct book 
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void sortByTitle(struct book *L, int len);
void sortByValue(struct book *L, int len);

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index;
	
	printf("Please enter the book title.\n");
	printf("Please [enter] at the start of a line to stop.\n");
	while (count < MAXBKS && gets(library[count].title) != NULL
						  && library[count].title[0] != '\0')
	{
		printf("Now enter the author. \n");
		gets(library[count].author);
		printf("Now enter the value. \n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}
	if (count > 0)
	{
		for (int i = 0; i < 3; i++)
		{
			switch (i)
			{
				case 1:	sortByTitle(library, count); printf("\nSort By Title : \n"); break;
				case 2:	sortByValue(library, count); printf("\nSort By Value : \n"); break;
			}
			printf("Here is the list of your book : \n");
			for (index = 0; index < count; index++)
				printf("%s by %s : $%.2f\n", library[index].title, library[index].author, library[index].value);
		}	
	}
	else
		printf("No books? Too bad. \n");
	
	return 0;
}

void sortByTitle(struct book *L, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 1;  j < len - i; j++)
		{
			if (*L[j-1].title > *L[j].title)
			{
				struct book temp = L[j-1];
				L[j-1] = L[j];
				L[j] = temp;
			}
		}
	}
}

void sortByValue(struct book *L, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 1;  j < len - i; j++)
		{
			if (L[j-1].value > L[j].value)
			{
				struct book temp = L[j-1];
				L[j-1] = L[j];
				L[j] = temp;
			}
		}
	}
}