#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to array or binaries
 *
 * Return:0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, k = 0, m = 1, num = 0;

	if (b == NULL)
		return (0);
	while (*(b + i))
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	}
	for (j = 0; j < i; j++)
	{
		if (b[j] == '1')
		{
			while (k < (i - j - 1))
			{
				m *= 2;
				k++;
			}
			k = 0;
			num += m;
		}
		m = 1;
	}
	return (num);
}
