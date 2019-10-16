#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "safeinput.h"
#include <time.h>

void Lab1p()
{
	printf("Hello World");
}

void Lab2p()
{
	//char name[] = "Stefan";
	char *name = "Stefan";
	printf("Hej %s", name);
}


void Lab3p()
{
	char name[] = "Stefan";
	int age = 47;
	printf("Jag heter %s och är %d år",name,age);
}

void Lab4p()
{
	char forname[80];
	scanf("%s", forname);
	GetInput("Skriv in ditt förnamn:", forname, 80);
	char surname[80];
	GetInput("Skriv in ditt efternamn:", surname, 80);

	printf("%s, %s\n", surname, forname);

}

void Lab5p()
{
	int tal1;
	printf("Mata in tal 1");
	scanf("%d", &tal1);

	int tal2;
	printf("Mata in tal 2");
	scanf("%d", &tal2);

	printf("Summan av %d och %d är %d", tal1,tal2,tal1+tal2);
}


void Lab6p()
{
	int birthYear;
	printf("Mata in födelseår");
	scanf("%d", &birthYear);

	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	printf("%d\n", tm.tm_year + 1900 - birthYear);


}

void Lab9p()
{
	int tal1;
	printf("Mata in tal 1");
	scanf("%d", &tal1);

	int tal2;
	printf("Mata in tal 2");
	scanf("%d", &tal2);

	printf("Summan är %d", tal1+tal2);
	printf("Diff %d", tal1-tal2);
	printf("Medel är %d", (tal1 + tal2) / 2);
	printf("Medel är %f", (float)(tal1 + tal2)/2);
	printf("Medel är %f", (tal1 + tal2) / 2.0f);
}


void Lab10p()
{
	int minuter;
	printf("Mata in antal minuter");
	scanf("%d", &minuter);

	int antalTimmar = minuter / 60;
	int antalMinuter = minuter - (antalTimmar*60);

	printf("Detta är %d timmar och %d minuter", antalTimmar, antalMinuter);
}

int main312231()
{
	Lab9p();
	Lab5p();
	Lab10p();
	Lab6p();
	Lab5p();
	Lab4p();
	Lab3p();
	Lab2p();
	Lab1p();
}