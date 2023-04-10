// 재귀함수를 이용한 최대공약수 알고리즘 1
int euclidRecursive(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return euclidRecursive(b, a % b);
	}
}
// 반복문을 이용한 최대공약수 알고리즘 2
int euclidRepeative(int a, int b)
{
	while (1)
	{
		int tmp = b;
		b = a % b;
		a = tmp;

		if (b == 0)
		{
			break;
		}
	}

	return a;
}