#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void arrayLab1()
{
	int arrayen[4];
	//char test[20] ;
	//scanf("%c",&test[0]);
	for (int i = 0; i < 4; i++)
	{
		printf("Mata in tal %d", i+1);
		scanf("%d", &arrayen[i]);
		//ALT
		//int temp; scanf("%d", &temp);arrayen[i]=temp;
	}
	
	int greatest = arrayen[0];
	for (int i = 0; i < 4; i++)
	{
		if (arrayen[i] > greatest)
			greatest = arrayen[i];
	}
	printf("Störst är %d", greatest);
}

void arrayLab2()
{
	int antal;
	printf("Hur många tal?");
	scanf("%d", &antal);

	int* arrayen;
	arrayen = (int *)malloc(sizeof(int) * antal);
	for (int i = 0; i < antal; i++)
	{
		printf("Mata in tal %d", i + 1);
		scanf("%d", &arrayen[i]);
		//ALT
		//int temp; scanf("%d", &temp);arrayen[i]=temp;
	}
	int greatest = 0;
	for (int i = 0; i < antal; i++)
	{
		if (arrayen[i] > greatest)
			greatest = arrayen[i];
	}
	printf("Störst är %d", greatest);

	free(arrayen);
}

void arrayLab3()
{
	long arrayen[6] = {1,44,2,7,4};
	arrayen[3] = 231;

	for (int i = 0; i < sizeof(arrayen) / sizeof(arrayen[0]); i++)
	{
		if (arrayen[i] % 2 == 1)
			arrayen[i] = 0;
	}

	for (int i = 0; i < sizeof(arrayen) / sizeof(arrayen[0]); i++)
	{
		printf("%d",arrayen[i]);
	}
	//HRMMM!!!! reapeat 5 på flera ställen...
	//om vi utökar till 6 - ändra på flera ställen...BAD
	//sizeof()...
}

void arrayLab4()
{
	int antal;
	printf("Hur många tal?");
	scanf("%d", &antal);

	float* arrayen = malloc(sizeof(float) * antal);
	for (int i = 0; i < antal; i++)
	{
		printf("Mata in mätning %d", i + 1);
		scanf("%f", &arrayen[i]);
	}
	float greatest = arrayen[0];
	float sum = 0;
	for (int i = 0; i < antal; i++)
	{
		if (arrayen[i] > greatest)
			greatest = arrayen[i];
		sum += arrayen[i];
	}
	printf("Störst är %f", greatest);
	printf("Medel är %f", sum/antal);
	free(arrayen);
}


void arrayLab5()
{
	int antal;
	printf("Hur många tal?");
	scanf("%d", &antal);

	float* arrayen = malloc(sizeof(float) * antal);
	
	//MATA IN som long = 20120512
	long* datum = malloc(sizeof(long) * antal);
	for (int i = 0; i < antal; i++)
	{
		printf("Mata in mätning %d", i + 1);
		scanf("%f", &arrayen[i]);
		printf("Mata in datum %d", i + 1);
		scanf("%ld", &datum[i]);
	}
	for (int i = 0; i < antal; i++)
	{
		printf("Mätning från %ld gav:%f",datum[i],arrayen[i]);
	}
	free(arrayen);
	free(datum);
}

typedef struct {
	long datum;
	float matVarde;
}TEMPERATUR_MATNING;


void arrayLab5b()
{
	int antal;
	printf("Hur många tal?");
	scanf("%d", &antal);

	TEMPERATUR_MATNING* arrayen = malloc(sizeof(TEMPERATUR_MATNING) * antal);

	for (int i = 0; i < antal; i++)
	{
		printf("Mata in mätning %d", i + 1);
		scanf("%f", &arrayen[i].matVarde);
		printf("Mata in datum %d", i + 1);
		scanf("%ld", &arrayen[i].datum);
	}
	for (int i = 0; i < antal; i++)
	{
		printf("Mätning från %ld gav:%f", arrayen[i].datum, arrayen[i].matVarde);
	}
	free(arrayen);
}




int main()
{
	arrayLab5b();
	arrayLab3();
	arrayLab5();
	arrayLab4();
	arrayLab2();
	arrayLab1();
	return 0;
}