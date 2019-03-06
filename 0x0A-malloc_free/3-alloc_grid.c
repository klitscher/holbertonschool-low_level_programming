#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - Returns a pointer to a 2d array of ints
 * @height: How high the grid is
 * @width: how wide the grid is
 *
 * Return: A pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	p = (int **) malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		p[i] = (int *) malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	return (p);
}