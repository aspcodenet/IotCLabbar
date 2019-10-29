#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>


void stringLabbar1()
{
	char s1[50];
	char s2[50];
	char s3[50];

	GetInput("Ange string 1:>",s1, sizeof(s1));
	GetInput("Ange string 2:>", s2, sizeof(s2));
	GetInput("Ange string 3:>", s3, sizeof(s3));

	char res[150];

	snprintf(res,sizeof(res),"%s%s%s",s1,s2,s3);
	printf("Det blev:%s\n",res);
	
	//Alt
	strncpy(res, s1, sizeof(res));
	strncat(res, s2, sizeof(res));
	strncat(res, s3, sizeof(res));
	printf("Det blev:%s\n", res);

}


void stringLabbar2()
{
	char* s = "Hello, world";

	//Loop - two...
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'w')
		{
			printf("Position %d\n", i);
			break;
		}
	}

	//Pekararitmetik
	char* ch = s;
	while (*ch != 0)
	{
		if (*ch == 'w')
		{
			printf("Position %d\n", ch - s);
			break;
		}
		ch++;
	}

	//Single loop utan pekararitmetik
	int position = -1;
	int i = 0;
	while (1)
	{
		if (s[i] == 0) break;
		if (s[i] == 'w')
		{
			position = i;
			break;
		}
		i++;
	}
	printf("%d\n", position);
}

void stringLabbar3()
{
	char* ch = "I am a C# hacker.";
	char* find = strrchr(ch, 'a');
	printf("%s", find);
	printf("Pos:%d", find - ch);


	int lastPositionOfASoFar = -1;
	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == 'a')
			lastPositionOfASoFar = i;
	}
	printf("%d", lastPositionOfASoFar);

	if (lastPositionOfASoFar == -1)
	{
		printf("fanns inget a");
	}

	int firstPosOfC = -1;
	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == 'C')
		{
			firstPosOfC = i;
			break;
		}
	}
	printf("C fanns p� pos %d och l�ngden �r %d", firstPosOfC, strlen(ch));

	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == ' ')
			printf("\n");
		else
			printf("%c", ch[i]);
	}


	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == 'I')
			ch[i] = 'i';
		else if (ch[i] == 'a')
				ch[i] = 'A';
		else if (ch[i] == 'k')
			ch[i] = 'K';
		else if (ch[i] == 'r')
			ch[i] = 'r';

	}
}


void stringLabbar4()
{
	bool lastCharWasSpace = true;
	char namn[30] = "kurt erik andersson";
	for (int i = 0; i < strlen(namn); i++)
	{
		if (lastCharWasSpace)
		{
			namn[i] = toupper(namn[i]);
		}
		if (namn[i] == ' ')
			lastCharWasSpace = true;
		else 
			lastCharWasSpace = false;
		//lastCharWasSpace = namn[i] == ' ';
	}

	for (int i = 0; i < strlen(namn); i++)
	{
		if ( i == 0 || namn[i] == ' ')
		{
			namn[i+1] = toupper(namn[i]);
		}
	}



}

void stringLabbar5()
{
	char txt[50] = "Detta �r en str�ng som du skall �ndra";
	for (int i = 0; i < strlen(txt); i++)
		if (txt[i] == ' ')
			txt[i] = '*';
	
	int antal = 0;
	for (int i = 0; i < strlen(txt); i++)
		if (txt[i] == '*')
			antal++;


}

int main2234()
{
	stringLabbar5();
	stringLabbar4();
	char ch[50] = "I am a C# hacker.";
	for (int i = 0; i < strlen(ch); i++)
	{
		if (ch[i] == 'I')
			ch[i] = 'i';
		else if (ch[i] == 'a')
			ch[i] = 'A';
		else if (ch[i] == 'k')
			ch[i] = 'K';
		else if (ch[i] == 'r')
			ch[i] = 'r';

	}
	printf("%s", ch);

	stringLabbar4();
	stringLabbar3();
	stringLabbar2();
	stringLabbar1();
	return 0;
}