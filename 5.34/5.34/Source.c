#include <stdio.h>
#include <stdlib.h>

int power(int a, int b) {
	if (b > 1)
	{
		return a * power(a, (b - 1));
	}
	else if (b == 1)
	{
		return a;
	}


}



int main() {
	int base, exponent;
	printf("Enter base and exponent:");
	scanf("%d %d", &base, &exponent);
	printf("power(%d,%d)=%d\n", base, exponent, power(base, exponent));
	system("pause");
}