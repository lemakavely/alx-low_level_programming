#include <stdio.h>
#include <stdlib.h>
#include<time.h>
  
/**
 * main - produce key
 * Return: none
 */

int main(void)
{
	int i;
    srand(time(0));
  
    for (i = 0; i<4; i++)
        printf(" %d ", rand());
  
    return 0;
}
