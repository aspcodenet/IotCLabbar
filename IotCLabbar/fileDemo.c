#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ReadFile()
{
	char line[255];
	FILE* f = fopen(".\\Databas\\birds.txt", "r");
	if (f == NULL)
	{
		printf("Kunde inte öppna filen\n");
		return;
	}
	while (fgets(line, sizeof(line), f) != NULL)
	{
		printf("Fågeljävel:%s\n", line);
	}
	fclose(f);
}


int mai234234234234()
{
	ReadFile();
	FILE* f = fopen("c:\\kurser\\heja123.txt", "a");
	//FILE* f = fopen("heja123.txt", "a");

	int age = 8;

	fprintf(f,"Hej åldern är %d mån %02d\n",age, 1);
	fclose(f);
	return 0;
}