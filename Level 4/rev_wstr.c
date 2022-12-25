#include <stdio.h>
#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
            i++;
        while (i != -1)
        {
            while (i != -1 && av[1][i] <= 32)
                i--;
            i++;
            while (av[1][i] != '\0' && av[1][i] <= 32)
                write(1, &av[1][i++], 1);
            i--;
            while (i != -1 && av[1][i] <= 32)
                i--;
            if (i == -1)
                break;
            while (i != -1 && av[1][i] > 32)
                i--;
            i++;
            while (av[1][i] > 32 && av[1][i] != '\0')
                write(1, &av[1][i++], 1);
            i--;
            while (i != -1 && av[1][i] > 32)
                i--;
            if (i == -1)
                break;
        }
    }
    write(1, "\n", 1);
}