#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void Lab1()
{
	char namn[10] = "STeFan";

	for (int i = 0; i < strlen(namn); i++)
	{
		namn[i] = tolower(namn[i]);
	}


	printf("Hello world\n");
}


float Add(float  float1, float float2)
{
	return float1 + float2;
}

bool IsOld(char *namn)
{
	return false;
}



float ConvertCelsiusToFahrenheit(float celsius)
{
	return celsius * 33.8f;
}

void Lab2()
{
	float celsius = 0;
	printf("Ange grader i Celsius");
	scanf("%f", &celsius);

	float fahrenheit = ConvertCelsiusToFahrenheit(celsius);

	printf("%f grader Fahrenheit", fahrenheit);

}

void Lab3()
{
	int tal1, tal2, tal3;
	printf("Skriv in tre tal med mellanslag emellan:");
	scanf("%d %d %d",&tal1,&tal2,&tal3);
	int sum = tal1 + tal2 + tal3;

	while (1)
	{
		int j = 12;
		break;
	}

	for (int i = 0; i < 2; i++)
	{
		int r = 12;
	}

	scanf("%d %d %d", &tal1, &tal2, &tal3);
	printf("%d+%d+%d=%d", tal1, tal2, tal3, tal1 + tal2 + tal3);
}

void Lab4()
{
	int tal1;
	long tal2;
	char ch;
	float fl;
	double dl;
	printf("Skriv in int long char float double:");
	scanf("%d %ld %c %f %lf", &tal1, &tal2, &ch, &fl, &dl);

	printf("%d\n", tal1);
	printf("%ld\n", tal2);
	printf("%c\n", ch);
	printf("%f\n", fl);
	printf("%lf\n", dl);
}


void Lab5()
{


	int tal;
	printf("Ange ett tal");
	scanf("%d", &tal);
	if (tal > 9)
		printf("Greater than nine");
	else if (tal > 0)
	{
		if (tal == 1) printf("One");
		else if (tal == 2) printf("Two");
		else if (tal == 3) printf("Three");
		else if (tal == 4) printf("Four");
		else if (tal == 5) printf("Five");
		else if (tal == 6) printf("Six");
		else if (tal == 7) printf("Seven");
		else if (tal == 8) printf("Eight");
		else if (tal == 9) printf("Nine");
	}
}


void Lab6()
{
	int tal;
	printf("Ange ett tal");
	scanf("%d", &tal);
	int tal2;
	printf("Ange ett tal till");
	scanf("%d", &tal2);

	for (int i = tal; i <= tal2; i++)
	{
		if (i > 0 && i <= 9)
		{
			if (i == 1) printf("One");
			else if (i == 2) printf("Two");
			else if (i == 3) printf("Three");
			else if (i == 4) printf("Four");
			else if (i == 5) printf("Five");
			else if (i == 6) printf("Six");
			else if (i == 7) printf("Seven");
			else if (i == 8) printf("Eight");
			else if (i == 9) printf("Nine");

		}
		else if (i > 9)
		{
			if (i % 2 == 0)
				printf("Even");
			else
				printf("Odd");
		}
	}

}


int main423234()
{
	Lab1();
	Lab2();
	Lab6();
	Lab5();
	Lab1();
	Lab2();
	Lab3();
	Lab4();
	return 0;
}