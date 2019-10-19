#define _CRT_SECURE_NO_WARNINGS
#include "safeinput.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <windows.h>
#include <limits.h>
#include "loopar.h"

void PrintPlayer(char* namn, PLAYER_POSITION pos)
{
	printf("%s är ", namn);
	switch (pos)
	{
		case GOALIE:
			printf("målis");
			break;
		case DEFENCE:
			printf("back");
			break;
		case FORWARD:
			printf("forward");
			break;
	}
}

SKRIVUT_ERRORCODE SkrivUt(int n, float temp)
{
	if (n > 100)
		return SKRIVUT_ERRORCODE_N_TOO_LARGE;
	if (temp < 30)
		return SKRIVUT_ERRORCODE_TEMP_TOO_LOW;

	printf("Talet är %d", n);
	printf("Temp är %f", temp);
	return SKRIVUT_ERRORCODE_OK;
}




void DubblaFloat(float *b)
{
	*b = 12.0f;
}


void Dubbla(int *b)
{
	*b = 12;
}


void JobbaMedIntArray(int* b)
{
	//*b = 12;
	b[0] = 12;
	b[1] = 123;
}


void ChangeChar(char* ch)
{
	*ch = 'A';
}

void PrintChars(char* ch)
{
	printf("%s", ch);
}

void main()
{
	//int tal[4];
	//for (int i = 0; i < 4; i++)
	//{
	//	int talet;
	//	printf("Mata in tal");
	//	scanf("%d",&talet);
	//	tal[i] = talet;
	//}

	int antal;
	printf("Hur många tal?");
	scanf("%d", &antal);
	int* nyatal = malloc(antal*sizeof(int));

	for (int i = 0; i < antal; i++)
	{
		int talet;
		printf("Mata in tal");
		scanf("%d", &talet);
		nyatal[i] = talet;
	}




	antal = antal + 1;
	nyatal = realloc(nyatal, antal * sizeof(int));





	char namn[40] = "Foppa";
	char* namn2 = "Stefan";

	PrintChars("Stefan");
	PrintChars(namn2);

	char ch;
	ch = 'a';
	ChangeChar(&ch);
	printf("%c", ch);


	int a;
	a = 13;
	printf("%d", &a);
	Dubbla(&a);
	printf("%d", a);

	int intArray[4] = {1,8,3,99};
	printf("%d", intArray[0]);
	JobbaMedIntArray(intArray);






	float af;
	af = 13.0f;
	printf("%d", &a);
	DubblaFloat(&af);
	printf("%f", af);


	SKRIVUT_ERRORCODE errorCode = SkrivUt(12, 38.0f);
	if (errorCode == SKRIVUT_ERRORCODE_N_TOO_LARGE)
	{
	}
	

	SkrivUt(42, 38.5f);
}




void LoopLab1()
{
	for (int i = 0; i <= 10; i++)
		printf("%d\n",i);

	int n = 0;
	while (n <= 10)
	{
		printf("%d\n", n);
		n++;
	}
}

void LoopLab2()
{
	int tal1, tal2;
	printf("Mata in tal1:");
	GetInputInt("",&tal1);
	printf("Mata in tal2:");
	GetInputInt("", &tal2);

	for (int i = tal1; i < tal2; i++)
		printf("%d\n",i);

	for (int year = 1972; year < 2019; year+=10)
		printf("%d\n",year);

}

void LoopLab3()
{
	int a = 12;

	while (true)
	{
		int tal1, tal2;
		printf("Mata in tal1:");
		GetInputInt("", &tal1);
		printf("Mata in tal2:");
		GetInputInt("", &tal2);

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
		GetInputInt("", &tal1);
		sum += tal1;
	}
	printf("Summan blir:%d",sum);
}


void LoopLab5()
{
	int tal1;
	printf("Mata in tal1:");
	GetInputInt("", &tal1);

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
		GetInputInt("", &tal1);
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
	for (int i = 0; i <= 100; i++)
		if (i % 2 == 1)
			printf("%d",i);

	for (int i = 1; i <= 100; i+=2)
		printf("%d", i);
}



void LoopLab8()
{
	int tal1;
	while (1)
	{
		printf("Mata in tal1:");
		GetInputInt("", &tal1);
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


int main231231231()
{

	int a = 46;
	if (1 < a < 45)
	{
		printf("Hello");
	}

	LoopLab1();
	LoopLab2();
	LoopLab3();
	LoopLab4();
	LoopLab5();
	LoopLab6();
	LoopLab7();
	LoopLab8();
	LoopLab9();
	SetConsoleOutputCP(1252);
	printf("blä");

	//Loopar
	for (int i = 0; i < 100; i+=10)
	{
		printf("år nr %d", i);
	}
	int i = 0;
	while (i < 100)
	{
		printf("år nr %d", i);
		i += 10;
	}
	i = 0;
	do
	{
		printf("år nr %d", i);
		i += 10;
	} while (i < 100);


	while (true)
	{
		int age;
		scanf("%d", &age);
		if (age < 10)
			break;
	}
	int age;
	do
	{
		scanf("%d", &age);

	} while (age >= 10);

	LoopLab1();

}

