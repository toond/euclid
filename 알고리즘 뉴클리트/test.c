#include <stdio.h>
#include <math.h>
#include "euclid.h"
#include <stdlib.h>
#include <time.h>

void testeuclid()
{
	int i;
	int pop = 0;	// �ǹ̾��� ����
	int index;
	int a[1000], b[1000];
	int gcd1[1000], gcd2[1000];
	double duration1, duration2;
	clock_t start1, end1;
	clock_t start2, end2;
	for (i = 0; i < 1000; i++)
	{
		a[i] = rand() % 32767 + 1000000000;
		b[i] = rand() % 32767 + 2000000000;
	}
	start1 = clock();
	srand((unsigned int)time(NULL));

	printf("euclidRecursive ���\n");
	printf("euclidRecursive ���\n");
	printf("euclidRecursive ���\n");
	for (i = 0; i < 1000; i++)
	{
		gcd1[i] = euclidRecursive(a[i], b[i]);
		printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", a[i], b[i], gcd1[i]);
	}
	end1 = clock();
	duration1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
	for (i = 0; i < 20; i++)
	{
		printf("\n");
	}

	start2 = clock();
	printf("euclidRepeative ���\n");
	printf("euclidRepeative ���\n");
	printf("euclidRepeative ���\n");
	for (i = 0; i < 1000; i++)
	{
		gcd2[i] = euclidRepeative(a[i], b[i]);
		printf("%d�� %d�� �ִ������� %d�Դϴ�.\n", a[i], b[i], gcd2[i]);
	}
	end2 = clock();
	duration2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
	printf("euclidRecursive ����ð��� %lf�Դϴ�.\n", duration1);
	printf("euclidRepeative ����ð��� %lf�Դϴ�.\n", duration2);

	for (i = 0; i < 1000; i++)
	{
		if (gcd1[i] == gcd2[i])
		{
			pop++;
		}
		else
		{
			index = i;
			printf("%d��° �ִ������� Ʋ�Ƚ��ϴ�.", i + 1);
		}
	}

	
	

}