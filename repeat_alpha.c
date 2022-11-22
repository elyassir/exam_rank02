#include <unistd.h>

void ft_reapt_aplha(int reapt, char c)
{
    int i = -1;
    while (++i <= reapt)
        write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = -1;
    if (ac == 2)
    {
        while (av[1][++i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                ft_reapt_aplha(av[1][i] - 'a', av[1][i]);
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                ft_reapt_aplha(av[1][i] - 'A', av[1][i]);
            else
                ft_reapt_aplha(0, av[1][i]);
        }
    }
}