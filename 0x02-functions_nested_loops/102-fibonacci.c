#include <stdio.h>

int main(void)
{
	int k;
	int i = 0;
	int j = 1;
	long int sum = i + j;

	for (k = 3; k <= 52; ++k)
	//while (sum <= 20365011074)
	{
		printf("%d\n", sum);
		i = j;
		j = sum;
		sum = i + j;
	}
	return (0);
}


