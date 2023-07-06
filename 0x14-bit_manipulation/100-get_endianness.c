#include <stdint.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	void *addr = &num;
	uint8_t *ptr = addr;

	if (*ptr == 0)
		return (0);
	return (1);
}
