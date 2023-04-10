#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int euclidRecursive(int a, int b);
int euclidRepeative(int a, int b);
int testeuclid();

int main(void)
{
	int a;
	a = testeuclid();
	printf("%d", a);
	return 0;
}