// 编写一个程序。按照下列要求，创建一个含有两个成员的结构模板：

	// a. 第一个成员是社会保障号；第二个成员是一个含三个成员的结构。
	   // 它的第一个成员是名，第二个成员名和姓中间的名字，最后一个成员是姓。
	   // 创建并初始化一个含有 5 个该类结构的数组。程序以下列形式输出数据：
		
		// Dribble, Flossie M. - 302039823
	
	   // 名和姓中间的名字只输出它的第一个字母，后面加了一个句点。如果姓名中间的
	   // 名字为空，那么它的第一个字母和句号都不会输出（当然喽）。
	   // 写一个函数来实现输出，把结构数组传递给这个函数。
	   
	// b. 修改 a 部分，传递结构的值而不是结构地址
#include <stdio.h>
	
struct Person
{
	char firstName[15];
	char middleName[15];
	char lastName[15];
};
	
struct Citizen 
{
	long societyID;
	struct Person information;
};

void init(struct Citizen *L);
//void PrintCitizen(struct Citizen *L, int len);
void PrintCitizen(struct Citizen L);

// int main(void)
// {
	// struct Citizen citizen[5];
	// init(citizen);
	
	// PrintCitizen(citizen, 5);
	
	// return 0;
// }

// void PrintCitizen(struct Citizen *L, int len)
// {
	// for (int i = 0; i < len; i++)
		// printf("%s,%s %c. - %09ld\n", 
			// L[i].information.firstName,
			// L[i].information.lastName,
			// *(L[i].information.middleName),
			// L[i].societyID);
// }

int main(void)
{
	struct Citizen citizen[5];
	init(citizen);
	
	for (int i = 0; i < 5; i++)
		PrintCitizen(citizen[i]);
	
	return 0;
}

void PrintCitizen(struct Citizen L)
{
	printf("%s,%s %c. - %09ld\n", 
		L.information.firstName,
		L.information.lastName,
		*(L.information.middleName),
		L.societyID);
}


void init(struct Citizen *L)
{
	L[0] = (struct Citizen) {302039823, (struct Person){"Dribble", "Middle", "Flossie"}};
	L[1] = (struct Citizen) {503121536, (struct Person){"Jerome", "David", "Salinger"}};
	L[2] = (struct Citizen) {692409690, (struct Person){"Ernest", "Miller", "Hemingway"}};
	L[3] = (struct Citizen) {409073622, (struct Person){"Linus", "Benedict", "Torvalds"}};
	L[4] = (struct Citizen) {853115592, (struct Person){"Stephen", "Gary", "Wozniak"}};
}
