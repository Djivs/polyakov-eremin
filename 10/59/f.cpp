#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
int number1(int n)
{
		switch (n/1000) {
		case(1):
			fprintf(stdout, "M");
			break;
		case(2):
			fprintf(stdout, "MM");
			break;
		case(3):
			fprintf(stdout, "MMM");
			break;
		}
		switch (n - (n / 1000) * 1000 - n % 100)
		{
		case(100):
			fprintf(stdout, "C");
			break;
		case(200):
			fprintf(stdout, "CC");
			break;
		case(300):
			fprintf(stdout, "CCC");
			break;
		case(400):
			fprintf(stdout, "CD");
			break;
		case(500):
			fprintf(stdout, "D");
			break;
		case(600):
			fprintf(stdout, "DC");
			break;
		case(700):
			fprintf(stdout, "DCC");
			break;
		case(800):
			fprintf(stdout, "DCCC");
			break;
		case(900):
			fprintf(stdout, "CM");
			break;
		}
		switch (n - (n/100)*100 - n%10)
		{
		case(10):
			fprintf(stdout, "X");
			break;
		case(20):
			fprintf(stdout, "XX");
			break;
		case(30):
			fprintf(stdout, "XXX");
			break;
		case(40):
			fprintf(stdout, "XL");
			break;
		case(50):
			fprintf(stdout, "L");
			break;
		case(60):
			fprintf(stdout, "LX");
			break;
		case(70):
			fprintf(stdout, "LXX");
			break;
		case(80):
			fprintf(stdout, "LXXX");
			break;
		case(90):
			fprintf(stdout, "XC");
			break;
		}
		switch (n%10)
		{
		case(1):
			fprintf(stdout, "I");
			break;
		case(2):
			fprintf(stdout, "II");
			break;
		case(3):
			fprintf(stdout, "III");
			break;
		case(4):
			fprintf(stdout, "IV");
			break;
		case(5):
			fprintf(stdout, "V");
			break;
		case(6):
			fprintf(stdout, "VI");
			break;
		case(7):
			fprintf(stdout, "VII");
			break;
		case(8):
			fprintf(stdout, "VIII");
			break;
		case(9):
			fprintf(stdout, "IX");
			break;
		}
}
int main()
{
	int N;
	fscanf(stdin, "%i", &N);
	number1(N);
}