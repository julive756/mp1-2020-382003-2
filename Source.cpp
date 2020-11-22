

//задача на условие N13

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 31

int main()
{
	int v1;
	int v2;
	int v3;
	int t1;
	int t2;
	int t3;
	double poluput;
	scanf("%d", &v1);
	scanf("%d", &v2);
	scanf("%d", &v3);
	scanf("%d", &t1);
	scanf("%d", &t2);
	scanf("%d", &t3);
	poluput = (v1 * t1 + v1 * t2 + v3 * t3) / 2;
	if (v1 * t1 >= poluput)
	{
		printf("bus ");
	}
	else
	{
		if (v2 * t2 + v2 * t2 >= poluput)
		{
			printf("a bike ");
		}
		else
		{
			printf("on foot ");
		}
	}
	return 0;
}


//задача на массивы 28d


int main()
{
	int i, max, min, dayx, dayy;
	int menstr[size];
	max = 0;
	min = 100000;
	for (i = 0; i < size; i++)
	{
		scanf("%d ", &menstr[i]);
	}
	for (i = 1; i <= size; i++)
	{
		if (menstr[i] > max )
		{
			max = menstr[i];
			dayx = i;

		}
		if (menstr[i] < min && menstr[i] > 0)
		{
			min = menstr[i];
			dayy = i;
		}
	}
	printf("maximum osadkov v den %d: %d\n", dayx, max);
	printf("mimimum osadkov v den %d: %d\n", dayy, min);
	return 0;
}