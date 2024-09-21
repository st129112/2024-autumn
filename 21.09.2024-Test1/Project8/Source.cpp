#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int a = n / 100;
	int b = n / 10 % 10;
	int c = n % 10;
	printf("%d", a + b + c);
	return EXIT_SUCCESS;
}