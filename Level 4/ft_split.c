#include <stdio.h>
#include <stdlib.h>

int ft_count(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        while (str[i] <= ' ' && str[i] != 0)
            i++;
        if (str[i] == 0)
            return (count);
        while (str[i] > 32)
            i++;
        count++;
    }
    return (count);
}

char    **ft_split(char *str)
{
    int count = ft_count(str);
    printf("count : %d\n", count);
    char **split = malloc ((count + 1) * sizeof(char *));
    int i = 0;
    int m = 0;
    int j;
    while (str[i])
    {
        j = 0;
        while (str[i] <= ' ' && str[i] != 0)
            i++;
        if (str[i] == 0)
            break;
        while (str[i] > 32)
        {
            i++;
            j++;
        }
        split[m] = malloc((j + 1) * sizeof(char ));
        i -= j;
        j = 0;
        while (str[i] > 32)
        {
            split[m][j] = str[i];
            i++;
            j++;
        }
        m++;
    }
    split[m] = NULL;
    return (split);
}

int main()
{
    char *str = "  Hello   My   Name   Is   Yasser  ";
    char **split = ft_split(str);
    while (*split)
        printf("%s\n", *split++);
    return (0);
}