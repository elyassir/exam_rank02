#include <unistd.h>

void    ft_putnbr(int nbr)
{
    if (nbr <= 9)
        write(1, &"0123456789"[nbr], 1);
    else
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
}

int is_prime(int nbr)
{
    int i = 2;
    while (i <= nbr / i)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int nbr = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = nbr * 10 + str[i] - 48;
        i++;
    }
    return (nbr);
}

int main(int ac, char **av)
{
    int i = 2;
    int nbr;
    int result = 0;
    if (ac == 2)
    {
        nbr = ft_atoi(av[1]);
        while (i <= nbr)
        {
            if (is_prime(i))
                result += i;
            i++;
        }
    }
    ft_putnbr(result);
    write(1, "\n", 1);
    return (0);
}