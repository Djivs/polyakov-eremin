#include <stdio.h>
int number1(int n)
{
	int i = 0;
	while(i<n){
		int i1 = 0;
		while(i1<n-1)
		{
			fprintf(stdout, "*");
		i1++;	
		}
		fprintf(stdout, "*\n");
		i++;
		}
}
int main()
{
	int N;
	fscanf(stdin, "%i", &N);
	number1(N);
}