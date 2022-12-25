int main(int ac, char **av)
{
    int i;
    int number = atoi(av[1]);
    int nbr;

    i = 0;
    nbr = 2;
    if (ac == 2)
    {
        if (number == 1)
        {
            write(1, "1", 1);
        }
        while (number != 0)
        {
            if (number != 0)
            {
                ft_putnbr(nbr);
            }
            else
                nbr++;
            i++;
        }
    }
    write(1, "\n", 1);
}