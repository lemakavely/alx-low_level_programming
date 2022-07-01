#include<stdio.h>
#include <ctype.h>
int main() {

	int c;
	for (c = 'A'; c <= 'Z'; c++) {	
		c = tolower(c);
		//putchar(c);
	
		
		printf("%c ", c);
	}
	printf("\n");
	return 0;
}
