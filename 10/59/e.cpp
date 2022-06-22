#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
int number1(int n)
{
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			fprintf(stdout, "%i ", i);
		i++;
	}
}
int main()
{
	int N;
	fscanf(stdin, "%i", &N);
	number1(N);
}