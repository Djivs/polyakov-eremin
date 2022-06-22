#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
int number1(int n)
{
	int b;
	int a;
	int i = 0;
	int i1 = 0;
	b = n;
	int w = n;
	while (n > 0) 
	{
		while (b > 9)
		{
			b = b / 10;
			i++;
		}
		fprintf(stdout, "%i\n", b);
		a = n - b*pow(10, i);
		while (a > 9)
		{
			a = a / 10;
			i1++;
		}
		switch (i - i1) {
		case(2):
			fprintf(stdout, "0\n");
			break;
		case(3):
			fprintf(stdout, "0\n0\n");
			break;
		}
		//fprintf(stdout, "  %i %i\n", i, i1);
		n = n - b * pow(10, i);
		b = n;
		i = 0;
		i1 = 0;
	}
	if(w%10 == 0)
	fprintf(stdout, "0");
}
int main()
{
	int N;
	fscanf(stdin, "%i", &N);
	number1(N);
}