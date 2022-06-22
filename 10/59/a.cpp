#include <stdio.h>
int number1(int n)
{
	int i = 0;
	while(i<n){
		fprintf(stdout, "-");
		i++;
		}
}
int main()
{
	int N;
	fscanf(stdin, "%i", &N);
	number1(N);
}