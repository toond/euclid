// ����Լ��� �̿��� �ִ����� �˰��� 1
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
// �ݺ����� �̿��� �ִ����� �˰��� 2
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