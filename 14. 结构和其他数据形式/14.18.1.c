
struct Month
{
	int orderID;
	char name[10];
	char short_name[4];
	int days;
}

const struct Month month[12] = 
{
	{1,  "January",		"Jan", 31},
	{2,  "February ",	"Feb", 28},
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
}