#define _CRT_SECURE_NO_WARNINGS
#include "safeinput.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <windows.h>


void Loop3()
{
	while (true)
	{
		char cont;
		int tal1, tal2;
		scanf("%d", &tal1);
		scanf("%d", &tal2);
		printf("Vill du fortsätta");
		scanf("%c", &cont);
		if (cont == 'N')
			break;
	}


}

void IfLab3()
{
	float f;
	scanf("%f", &f);

	if (f > 39.5f)
	{
		printf("Uppsök läkare");
	}
	else if (f >= 37.8f)
	{
		printf("Du har feber");
	}
	else if (f < 37.8f)
	{
		printf("Du har inte feber");
	}



}

void IfLab1()
{

	int tal;
	printf("Ange ett tal:");
	scanf("%d", &tal);
	if (tal > 10)
		printf("Greater than 10");
	else if (tal < 10)
		printf("Less than 10");
}

void IfLab2()
{
	int antal;
	printf("Ange antal liter mjölk som finns:");
	scanf("%d", &antal);

	if (antal < 10)
		printf("Beställ 30 paket");
	else if (antal < 20)
		printf("Beställ 20 paket");
	else
		printf("Du behöver inte beställa någon mjölk");
}

void IfLab4()
{
	int age;
	printf("Ange ålder");
	scanf("%d", &age);
	if (age < 18)
		printf("Ej myndig");
	else if (age < 65)
		printf("Myndig");
	else
		printf("Pensionär");

}

void IfLab5()
{
	int kat;
	printf("Ange kategori - 1=Vuxen, 2=Pensionär, 3=Student");
	scanf("%d", &kat);
	if (kat == 1)
		printf("30");
	else if (kat == 2 || kat == 3)
		printf("20");
	else
		printf("Felaktig kategori");
}

void IfLabs6()
{
	int year;
	printf("Ange födelseår:");
	scanf("%d", &year);
	if (year >= 1980 && year < 1990)
		printf("Born in 80:s");
	else if (year >= 1990 && year < 2000)
		printf("Born in 90:s");
	else if(year < 1980 || year >= 2000) //Not needed- else is enough
		printf("Not in 80s or 90s");

}

void IfLabs7()
{
	const char* userName = "stefan";
	const char* passWord = "secret";

	char user[20];
	char pwd[20];
	GetInput("Ange username:", user, sizeof(user));
	GetInput("Ange pwd:", pwd, sizeof(pwd));
	if (strcmp(user, userName) != 0)
		printf("Wrong username");
	else if (strcmp(pwd, passWord) != 0)
		printf("Wrong password");
	else printf("You are logged in");
}



void IfLabs8()
{
	char country[80];
	GetInput("Ange land:", country, sizeof(country));
	for (int i = 0; i < strlen(country); i++)
		country[i] = tolower(country[i]);
	if (strcmp(country, "Sweden") == 0 ||
		strcmp(country, "Norge") == 0 ||
		strcmp(country, "Danmark") == 0 )
		printf("Du bor i Skandinavien");

}

void IfLabs9()
{
	char bil[80];
	GetInput("Ange bil:", bil, sizeof(bil));

	if (strcmp(bil, "Volvo") != 0)
	{
		if (strcmp(bil, "Volkswagen") == 0 || strcmp(bil, "BMW") == 0 || strcmp(bil, "Audi") == 0)
			printf("bilen är tysk");
		else if (strcmp(bil, "Renault") == 0 || strcmp(bil, "Peugeout") == 0 || strcmp(bil, "Citroen") == 0)
			printf("bilen är Fransk");
		else
			printf("bilen är inte tysk eller fransk eller svensk");
	}

}

void IfLabs10()
{
	printf("Hur mycket pengar har du:");
	int pengar;
	scanf("%d", &pengar);

	printf("Har du rabatt (1 = ja, 0 = nej):");
	int val;
	scanf("%d", &val);
	bool harRabatt = val;

	if (pengar >= 15 && pengar <= 25)
	{
		if (harRabatt)
			printf("Du kan köra en liten hamburgare och en pommes frites");
		else
			printf("Du kan köra en liten hamburgare");
	}
	else if (pengar > 25 && pengar <= 50)
	{
		if (harRabatt)
			printf("Du kan köra en stor hamburgare och en pommes frites");
		else
			printf("Du kan köra en stor hamburgare");
	}
	else if (pengar > 60 || (harRabatt && pengar >= 50 && pengar <= 60))
	{
		printf("Du kan köpa ett meal med dryck");
	}

}

int main()
{
	IfLabs10();
	IfLabs9();
	IfLabs8();
	IfLabs7();
	IfLabs6();
	IfLab5();
	SetConsoleOutputCP(1252);
	printf("blä");
	IfLab4();
	IfLab2();
	IfLab3();
	Loop3();
	IfLab1();
}