#define _CRT_SECURE_NO_WARNINGS
#include "safeinput.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <windows.h>

void LoopLab1()
{
	for (int i = 0; i <= 10; i++)
		printf("%i\n");
}

void LoopLab2()
{
	int tal1, tal2;
	printf("Mata in tal1:");
	scanf("%d",&tal1);
	printf("Mata in tal2:");
	scanf("%d", &tal2);

	for (int i = tal1; i < tal2; i++)
		printf("%i\n");
}

void LoopLab3()
{
	while (true)
	{
		int tal1, tal2;
		printf("Mata in tal1:");
		scanf("%d", &tal1);
		printf("Mata in tal2:");
		scanf("%d", &tal2);
		
		printf("%d + %d är %d", tal1, tal2, tal1+tal2);

		char input[2];
		GetInput("Vill du fortsätta J/N", input, sizeof(input));
		if (input[0] == 'N')
			break;
		
	}
}

void LoopLab4()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		int tal1;
		printf("Mata in tal1:");
		scanf("%d",&tal1);
		sum += tal1;
	}
	printf("Summan blir:%d",sum);
}


void LoopLab5()
{
	int tal1;
	printf("Mata in tal1:");
	scanf("%d", &tal1);

	for (int i = tal1-1; i >0; i--)
	{
		printf("%d",i);
	}
}

void LoopLab6()
{
	while (1)
	{
		int tal1;
		printf("Mata in tal1:");
		scanf("%d", &tal1);
		if (tal1 > 10)
			printf("Värdet är för högt");
		else if (tal1 < 10)
			printf("Värdet är för lågt");
		else
			break;
	}

}

void LoopLab7()
{
	for (int i = 0; i < 100; i++)
		if (i % 2 == 1)
			printf("%d",i);
}

void LoopLab8()
{
	int tal1;
	while (1)
	{
		printf("Mata in tal1:");
		scanf("%d", &tal1);
		if (tal1 > 30)
		{
			printf("Du har matat in ett felaktigt tal");
			continue;
		}
		break;
	}
	for (int i = tal1 + 1; i <= 30; i++)
		printf("%d", i);

}

void LoopLab9()
{
	char name[30];
	char gatuadress[30];
	char postnummer[30];
	char postort[30];
	name[0] = 0;
	gatuadress[0] = 0;
	postnummer[0] = 0;
	postort[0] = 0;

	//while (strlen(name) == 0 || strlen(gatuadress) == 0 || strlen(postnummer) == 0 || strlen(postort) == 0 == 0)
	while (name[0] == 0 || gatuadress[0] == 0 || postnummer[0] == 0 || postort[0] == 0)
	{
		if (name[0] == 0)
			GetInput("Mata in namn", name, sizeof(name));
		if (gatuadress[0] == 0)
			GetInput("Mata in gatuadress", gatuadress, sizeof(gatuadress));
		if (postnummer[0] == 0)
			GetInput("Mata in postnummer", postnummer, sizeof(postnummer));
		if (postort[0] == 0)
			GetInput("Mata in postnummer", postort, sizeof(postort));
	}
	printf("Alla uppgifter ifyllda");
}


int main231312231()
{
	SetConsoleOutputCP(1252);
	printf("blä");

	LoopLab1();

}

