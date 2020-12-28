
//matrica 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define a 4
#define b 3
#define SIZE 100




int main()
{
	int i, j, k;
	int first = 0;
	int second = b - 1;
	int dop = 0;
	int nomer = 0;
	int kolich = 0;
	int vsp = b / 2;
	int kol[SIZE];
	int number[a][b];
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
			scanf("%d", &number[i][j]);
	}
	for (i = 0; i < a; i++)
	{
		for (k = 0; k < vsp; k++)
		{
			if (number[i][first] == number[i][second])
				dop++;
			first += 1;
			second -= 1;

		}
		if (dop == vsp)
		{
			kol[nomer] = i + 1;
			nomer++;
			kolich++;
		}
		dop = 0;
		first = 0;
		second = b - 1;
	}
	for (i = 0; i < kolich; i++)
	{
		printf("%d ", kol[i]);
	}
	return 0;

}

//matrica 1 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4
#define kol 100


int main()
{
	int i, j;
	int dop = 0;
	int num = 0;
	int sum = 0;
	int mas[SIZE][SIZE];
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
			scanf("%d", &mas[i][j]);
	}
	int nabor[kol];
	for (i = 1; i < SIZE; i++)
	{
		dop = i;
		for (j = 0; j < SIZE; j++)
		{
			if (dop < SIZE)
			{
				sum += mas[dop][j];
				dop++;
			}
		}
		nabor[num] = sum;
		sum = 0;
		num++;
		j = 0;
	}
	for (j = 1; j < SIZE; j++)
	{
		dop = j;


		for (i = 0; i < SIZE; i++)
		{
			if (dop < SIZE)
			{
				sum += mas[i][j];
				dop++;
			}
		}
		nabor[num] = sum;
		sum = 0;
		num++;
		i = 0;
	}
	for (i = 0; i < num; i++)
		printf("%d ", nabor[i]);
	return 0;
}

//stroki 7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 80

int main()
{
	char s[SIZE], c;
	int i, j, length;
	puts("Enter string: ");
	fgets(s, 40, stdin);
	puts("Enter charachter: ");
	scanf("%c", &c);
	length = strlen(s);
	for (i = 0; i < length; ++i)
	{

		if (s[i] == c)
		{
			for (j = strlen(s); j >= i; --j)
				s[j + 1] = s[j];
			++i;
			if (length < SIZE) length = strlen(s);
			else break;
		}
	}
	printf("%s", s);

	return 0;
}


