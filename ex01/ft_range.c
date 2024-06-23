#include <stdlib.h>

int *ft_range(int min, int max)
{
    int i;
    int size;
    int *array;

    size = max - min;
    array = (int *)malloc(sizeof(int) * size);
    i = 0;
    if(min >= max)
    {
        return (NULL);    
    }
    while(i < size)
    {
        array[i] = min + i;
        i++;
    }
    if(array == NULL)
        return (NULL);
    return (array);
}
#include <stdio.h>
int main()
{
    int i = 0;
    int max = 100;
    int min = -100;
    int size = max - min;
    int *arr = ft_range(min, max);

    while(i < size)
    {
        printf("%d, ", arr[i]);
        i++;
    }
    return 0;
}