#include <stdio.h>
#include <math.h>
#include "euclid.h"
#include <stdlib.h>
#include <time.h>

void testeuclid()
{
	int i;
	int pop = 0;	// 의미없는 변수
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

	printf("euclidRecursive 사용\n");
	printf("euclidRecursive 사용\n");
	printf("euclidRecursive 사용\n");
	for (i = 0; i < 1000; i++)
	{
		gcd1[i] = euclidRecursive(a[i], b[i]);
		printf("%d와 %d의 최대공약수는 %d입니다.\n", a[i], b[i], gcd1[i]);
	}
	end1 = clock();
	duration1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
	for (i = 0; i < 20; i++)
	{
		printf("\n");
	}

	start2 = clock();
	printf("euclidRepeative 사용\n");
	printf("euclidRepeative 사용\n");
	printf("euclidRepeative 사용\n");
	for (i = 0; i < 1000; i++)
	{
		gcd2[i] = euclidRepeative(a[i], b[i]);
		printf("%d와 %d의 최대공약수는 %d입니다.\n", a[i], b[i], gcd2[i]);
	}
	end2 = clock();
	duration2 = (double)(end2 - start2) / CLOCKS_PER_SEC;
	printf("euclidRecursive 실행시간은 %lf입니다.\n", duration1);
	printf("euclidRepeative 실행시간은 %lf입니다.\n", duration2);

	for (i = 0; i < 1000; i++)
	{
		if (gcd1[i] == gcd2[i])
		{
			pop++;
		}
		else
		{
			index = i;
			printf("%d번째 최대공약수가 틀렸습니다.", i + 1);
		}
	}

	
	

}