#include <stdio.h>

int main()
{
	int num, counter = 0, rem;
	printf("Enter a number:");
	scanf_s(" %d", &num);
	do
	{
		rem = num / 10;
		num = rem;
		counter++;
	}while (rem > 0);
	printf("Your number has %d digits.\n", counter);
}
