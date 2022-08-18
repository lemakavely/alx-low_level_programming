#include "main.h"

/**
 * get_endianness - checks weather big or little endian
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int m = 1;
	char *n = (char *)&m;

	return (*n);
}
