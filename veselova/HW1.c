#define _CRT_SECURE_NO_WARNINGS 
#include "stdio.h"

//24 задача на массивы 
int main()
{
	int a[10];
	int i;
	int n;
	int j;
	
	for (i = 0; i < 10; i++)
	{
		printf("a [%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (n =  1; n < 9; n++)
		{
			if (a[i] != a[n]) 
			{
				if (a[i] != a[9])
				{
					printf("a[%d] - unique, ", i);
					break;
				}
			}
			else
			{ 
				printf(" a[%d] - non - unique, ", i);
				break;
			}
			
		}
		j++;
		
	}
	return 0;
}
    
//8 задача на условия
int main()
{
	double dol, eur, fun, kdol, keur, kfun, rub, fived;
	dol = 65.92;
	eur = 74.24;
	fun = 101.18;
	fived = 65.92 * 500;
	rub = 0;
	printf("Enter dol:");
	scanf("%lf", &kdol);
	if ((kdol * dol) > fived)
	{
		rub += fived;
		rub += (kdol * dol - fived) * 1.02;
	}
	else
	{
		rub += kdol * dol;
	}
	printf("Enter eur:");
	scanf("%lf", &keur);
	if ((keur * eur) > fived)
	{
		rub += fived;
		rub += (keur * eur - fived) * 1.02;
	}
	else
	{
		rub += keur * eur;
	}
	printf("Enter fun:");
	scanf("%lf", &kfun);
	if ((kfun * fun) > fived)
	{
		rub += fived;
		rub += (kfun * fun - fived) * 1.02;
	}
	else
	{
		rub += kfun * fun;
	}
	printf("Take the %.2lf rub", rub);
	return 0;
}


//выводит числа Фибоначи
#define _CRT_SECURE_NO_WARNINGS 
#include "stdio.h""

int main()
{
	int i, x, y, d, n;
	x = 0;
	y = 1;
	d = 0;
	printf("insert the number: ");
	scanf("%d ", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", x);
		d = x + y;
		x = y;
		y = d;
	}
	return 0;
}



///8 определяет, является ли заданное число совершенным 
#define _CRT_SECURE_NO_WARNINGS 
#include "stdio.h"


int main()
{
	int n, i, sum;
	sum = 0;
	printf("enter number: ");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		printf(" YES ");

	}
	else
	{
		printf(" NO ");
	}
	return 0;
}