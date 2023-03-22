/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp returns non-zero,
 *         -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			break;
	}

	return (i);
}
