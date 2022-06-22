#include <stdio.h>
int number1(int n)
{
	while(n!=0)
	{
	fprintf(stdout, "%i\n", n % 10);
	n = n/10;
	}
}
int main()
{
	int N;
	fscanf(stdin, "%i", &N);
	number1(N);
}