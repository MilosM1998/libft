#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int size;
    int *array;

    size = max - min;
    array = (int *)malloc(sizeof(int) * size);
    i = 0;
    if(min >= max)
    {
        *range = NULL;
        return (0);
    }
    while(i < size)
    {
        array[i] = min + i;
        i++;
    }
    *range = array;
    if(array == NULL)
        {
            return (-1);
        }
    return (size);
}
#include <stdio.h>
int main()
{
    int i = 0;
    int *arr;
    int max = 50;
    int min = 10;
    int size;

    size = ft_ultimate_range(&arr, min, max);
    printf("Size is: %d\n", size);
    while(i < size)
    {
        printf("%d, ", arr[i]);
        i++;
    }
    return 0;
}