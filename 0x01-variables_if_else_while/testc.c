#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
srand(time(NULL));   // Initialization, should only be called once.
int r = rand(); 
printf("%d\n" , &r);
}
