#include <stdio.h>

int main()
{
	int num, counter = 0, rem;
	printf("Bir sayi girin:");
	scanf_s(" %d", &num);
	do
	{
		rem = num / 10;
		num = rem;
		counter++;
	}while (rem > 0);
	printf("Sayiniz %d basamakli.\n", counter);
}