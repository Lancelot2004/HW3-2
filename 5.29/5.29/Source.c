#include <stdio.h>
#include <stdlib.h>

//int lcm(int,int);
int lcm(int x, int y) {
	int temp;
	if (y > x)
	{
		temp = y;
		y = x;
		x = temp;
	}
	for (int i = x;; i += x) {
		if (i%y == 0)
		{
			return i;
		}
	}
}


int main() {
	int a, b;
	printf("Enter two integers:");
	scanf("%d %d", &a, &b);
	printf("The LCM is %d\n", lcm(a, b));
	system("pause");
}

