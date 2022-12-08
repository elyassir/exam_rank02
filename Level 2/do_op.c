#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int first_int = atoi(av[1]);
        int second_int = atoi(av[3]);
        char op = av[2][0];

        if (op == '*')
            printf("%d", (first_int * second_int));
        else if (op == '+')
            printf("%d", (first_int + second_int));
        else if (op == '-')
            printf("%d", (first_int - second_int));
        else if (op == '/')
            printf("%d", (first_int / second_int));
    }
    printf("\n");
    return (0);
}