#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array (SUCCESS),
 * Else, NULL (FAILURE)
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return ('\0');

	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return ('\0');

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
