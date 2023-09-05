#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a 2 dimensional array of integers,
 *	NULL on failure,
 *	If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **s, i, j;

	if (width == 0 || height == 0)
		return (NULL);
	s = (int **) malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = (int *) malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	return (s);
}
