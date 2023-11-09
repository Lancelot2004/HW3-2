#include <stdio.h>
#include <stdlib.h>

int main() {
	char alphabet;
	printf("Enter an alphabet:");
	scanf("%c", &alphabet);
	if (alphabet >= 65 && alphabet <= 90)
	{
		alphabet += 32;
		printf("%c", alphabet);
	}
	else if (alphabet >= 97 && alphabet <= 122)
	{
		alphabet -= 32;
		printf("%c", alphabet);
	}
	else {
		printf("It is not alphabet!!!");
	}

	system("pause");
}