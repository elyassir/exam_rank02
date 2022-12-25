#include <unistd.h>

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        while (av[1][i] <= 32 && av[1][i] != '\0')
            i++;
        if (av[1][i] == '\0')
            return (0);
        while (av[1][i] > 32 && av[1][i] != '\0')
            i++;
        while (av[1][i])
        {
            while (av[1][i] <= 32 && av[1][i] != '\0')
                i++;
            while (av[1][i] > 32 && av[1][i] != '\0')
                write(1, &av[1][i++], 1);
            write(1, " ", 1);
        }
        i = 0;
        while (av[1][i] <= 32 && av[1][i] != '\0')
            i++;
        if (av[1][i] == '\0')
            return (0);
        while (av[1][i] > 32 && av[1][i] != '\0')
            write(1, &av[1][i++], 1);
    }
    //else
    write(1, "\n", 1);
}