#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ReadFile()
{
	char line[255];
	FILE* f = fopen(".\\Databas\\birds.txt", "r");
	if (f == NULL)
	{
		printf("Kunde inte �ppna filen\n");
		return;
	}
	while (fgets(line, sizeof(line), f) != NULL)
	{
		printf("F�gelj�vel:%s\n", line);
	}
	fclose(f);
}


int mai234234234234()
{
	ReadFile();
	FILE* f = fopen("c:\\kurser\\heja123.txt", "a");
	//FILE* f = fopen("heja123.txt", "a");

	int age = 8;

	fprintf(f,"Hej �ldern �r %d m�n %02d\n",age, 1);
	fclose(f);
	return 0;
}