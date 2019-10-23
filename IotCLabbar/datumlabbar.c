#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "safeinput.h"


void datumLabbar1()
{
	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);

	printf("Complete date:%4d-%02d-%02d %02d:%02d:%02d%", datum->tm_year + 1900,
		datum->tm_mon+1, datum->tm_mday,
		datum->tm_hour, datum->tm_min, datum->tm_sec
		);

	printf("Short date:%4d-%02d-%02d", datum->tm_year + 1900,
		datum->tm_mon + 1, datum->tm_mday
	);

}


void datumLabbar2()
{
	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);

	printf("Year:%4d\nMonth:%02d\nDay:%02d\nHour:%02d\nMinute:%02d\nSecond:%02d%\n", datum->tm_year + 1900,
		datum->tm_mon + 1, datum->tm_mday,
		datum->tm_hour, datum->tm_min, datum->tm_sec
	);


}


void datumLabbar3()
{
	char* weekday[] = { "Sunday", "Monday",
								 "Tuesday", "Wednesday",
								 "Thursday", "Friday", "Saturday" };

	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);

	printf("The day of the week for %02d/%02d/%04d is %s\n",
		datum->tm_mday, datum->tm_mon + 1, datum->tm_year + 1900,
		weekday[datum->tm_wday]
	);
}

const char* GetWeekDayInSwedish(int weekday)
{
	switch (weekday)
	{
	case 0:
		return "Söndag";
	case 1:
		return "Måndag";
	case 2:
		return "Tisdag";
	case 3:
		return "Onsdag";
	case 4:
		return "Torsdag";
	case 5:
		return "Fredag";
	case 6:
		return "Lördag";

	}
}

void datumLabbar3b()
{
	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);

	printf("The day of the week for %02d/%02d/%04d is %s\n",
		datum->tm_mday, datum->tm_mon + 1, datum->tm_year + 1900,
		GetWeekDayInSwedish(datum->tm_wday )
	);
}


void datumLabbar4()
{
	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);
	datum->tm_mday += 40;
	mktime(datum);

	printf("The day of the week for %02d/%02d/%04d is %s\n",
		datum->tm_mday, datum->tm_mon + 1, datum->tm_year + 1900,
		GetWeekDayInSwedish(datum->tm_wday)
	);
}


void datumLabbar5()
{
	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);

	printf("%04d-%02d-%02d\n", 	datum->tm_year + 1900, datum->tm_mon + 1, datum->tm_mday);

	for (int i = 0; i < 10; i++)
	{
		datum->tm_mday += 40;
		mktime(datum);

		printf("%04d-%02d-%02d\n",
			datum->tm_year+1900, datum->tm_mon + 1, datum->tm_mday
		);
	}
}



void datumLabbar7()
{
	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);
	datum->tm_mon += 1;
	datum->tm_mday = 1;
	mktime(datum);

	datum->tm_mday -= 1;
	mktime(datum);
	printf("Månad %d, %04d har %d dagar\n", datum->tm_mon+1,
		datum->tm_year+1900, datum->tm_mday
		);
}

void datumLabbar9()
{
	struct tm d;
	GetInputInt("Dag", &d.tm_mday);
	GetInputInt("Månad", &d.tm_mon);
	GetInputInt("Year", &d.tm_year);
	d.tm_year -= 1900;
	d.tm_mon -= 1;
	mktime(&d);

	time_t justNu = time(NULL);
	struct tm* idag = localtime(&justNu);

	if(idag->tm_year == d.tm_year && idag->tm_mon == d.tm_mon && 
		idag->tm_mday == d.tm_mday)
		printf("Idag");
	else
		printf("Inte idag");
}


void main()
{
	datumLabbar9();
	datumLabbar7();
	datumLabbar5();
	datumLabbar4();
	datumLabbar3b();
	datumLabbar3();
	datumLabbar2();
	datumLabbar1();
}