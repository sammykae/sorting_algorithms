#include "sort.h"


/**
 * bubble_sort_not_optimised - bubble sort algorithm
 * @array: pointer to array to sort
 * @size: number of elements
*/
void bubble_sort_not_optimised(int *array, size_t size){
size_t i;
short int swapped;
int tmp;

do
{
	swapped = 0;
	for (i = 1; i < size; i++)
	{
		print_array(array, size);
		if (array[i-1] > array[i])
		{
			tmp = array[i];
			array[i] = array[i-1];
			array[i-1] = tmp;
			swapped = 1;
			print_array(array, size);
		}
	}
	
} while (swapped != 0);

}
