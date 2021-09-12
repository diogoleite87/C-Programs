#include <stdio.h>
#include <stdlib.h>

/*Mostrar possiveis combinações de 6 dezenas da megasena*/

int m1(int n)
{

	if (n == 60)
		return 60;

	else
	{
		printf("%d\n", m1(n + 1));
	}
	return n;
}

int m2(int p)
{
	if (p == 6)
	{
		return 2;
	}
	else
	{
		m2(p + 1);
		m1(0);
	}

	return 0;
}

int main()
{

	int a = 0;

	m2(a);

	return 0;
}