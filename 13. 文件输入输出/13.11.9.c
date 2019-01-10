#include <stdio.h>
#include <stdlib.h>
#define LEN 41

int main(void)
{
	FILE *file;
	char word[LEN];
	int count = 0;
	if ((file = fopen("words", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"words\" file.\n");
		exit(1);
	}
	
	while (fscanf(file, "%s", word) == 1)
		count++;
	
	puts("Enter words to add to the file: press the Enter");
	puts("kay at the beginning of a line to terminate.");
	while (fgets(word, 40, stdin) != NULL && *word != '\0')
	{
		fprintf(file, "%d", ++count);
		fprintf(file, "%s", word);
	}

	
	puts("File contents: ");
	
	rewind(file);
	
	while (fscanf(file, "%s", word) == 1)
		puts(word);
	
	if (fclose(file))
		fprintf(stderr, "Error closing file.\n");
	
	return 0;
}
