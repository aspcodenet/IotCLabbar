#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "safeinput.h"
#include <stdbool.h>
#include "loopar.h"


#define ANFALLARE 22
#define MALIS 23


int main243243243()
{
	char foppa[] = "Foppa";
	PLAYER_POSITION p = FORWARD;
	PrintPlayer(foppa, p);

	PrintPlayer("Mats Sundin", FORWARD);

	SKRIVUT_ERRORCODE errorCode = SkrivUt(12, 38.0f);
	if (errorCode == SKRIVUT_ERRORCODE_N_TOO_LARGE)
	{
	}

	int i;
	scanf("%d", &i);

	char name[100];
	scanf("%s", name);


	printf("%s", name);

	INPUT_RESULT res = GetInput("Mata in ditt namn:", name, sizeof(name));



	for (int i = 0; i < 5; i++)
	{
		printf("varv i loopen %d",i);
	}



	bool isOld = false;
	if (isOld == true)
	{

	}

	int weekDay = 0; // 0 = monday
	if (weekDay == 0)
		printf("Monday");
	else if (weekDay == 1)
		printf("Tuesday");
	else if (weekDay == 2)
		printf("Wednesday");
	else
		printf("Ngn annan dag");

	switch (weekDay)
	{
		case 0:
			printf("Monday");
			break;
		case 1:
			printf("Tuesday");
			break;
		case 2:
			printf("Wednesday");
			break;
		default:
			printf("Ngn annan dag");
			break;
	}



	bool cont = true;
	do {
		INPUT_RESULT res = GetInput("Mata in ditt namn:", name, sizeof(name));
		if (res == INPUT_RESULT_TOO_LONG)
		{
			printf("Skriv kortare");
		}
		else if (res == INPUT_RESULT_NO_INPUT)
		{
			printf("Skriv nåt");
		}
		else if (res == INPUT_RESULT_OK)
		{
			cont = false;
		}

	} while (cont == true);


	
	

	printf("Du heter %s",name);

	double age;
	int blabla = 99;
	printf("Mata in din ålder:");
	scanf("%lf", &age);
	printf("Du är %lf år gammal %d", age, blabla);


	char ch = 'a';

	
	char c = 65;
	float f1 = 123.2343;
	double d1 = 231231312.2313231;
	long l = 0;
	short s = 1223;

	s = s + 12;

	s = s + 1; 
	s++;

	s += 1;
	s += 12;


	printf("Hello");
	return 0;
}