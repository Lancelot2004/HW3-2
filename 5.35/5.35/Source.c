#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int x) {
	unsigned long long int a1 = 0, a2 = 1, a3;
	if (x > 2) {
		for (unsigned int i = 2; i < x; i++)
		{
			a3 = a1 + a2;
			a1 = a2;
			a2 = a3;
		}
	}
	else
	{
		a3 = x - 1;
	}
	return a3;
}


int main() {
	unsigned int a;
	scanf("%u", &a);
	printf("%llu\n", fibonacci(a));
	system("pause");
}