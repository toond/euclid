#include <stdio.h>
#include "euclid.h"
#include <stdlib.h>
#include <time.h>

int testeuclid()
{
	int x, y;
	int a;
	double duration;
	int count = 0;
	clock_t start, end;
	start = clock();
	srand((unsigned int)time(NULL));
	while (1)
	{
		count++;
		if (count == 1000)
		{
			break;
		}
		x = rand() % 32767 + 1000000000;
		y = rand() % 32767 + 2000000000;
		printf("%10d와 %10d의 최대공약수는? >> ", x, y);
		a = euclidRecursive(x, y);
		printf("%d\n", a);
	}
	end = clock();
	duration = (double)(end - start) / CLOCKS_PER_SEC;
	printf("%lf\n", duration);

	return 0;
}