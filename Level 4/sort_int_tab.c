#include <unistd.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int tmp;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}
#include <stdio.h>
int main()
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort_int_tab(array, 9);
    for(int i = 0; i < 9; i++)
        printf("%d ", array[i]);
}