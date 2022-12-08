#include <unistd.h>
#include <stdlib.h>
char *lowerCamelCase(char *str)
{
    int i = 0;
    int nbr_chars = 0;
    while (str[i])
    {
  
        if (str[i] >= 'A' && str[i] <= 'Z')
            nbr_chars++;
        i++;
        nbr_chars++;
    }
    char *camelCase = malloc(nbr_chars * (char ) + 1);
    i = 0;
    nbr_chars = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
            camelCase[nbr_chars] = '_';
            nbr_chars++;
        }
        camelCase[nbr_chars] = str[i];
        nbr_chars++;
        i++;
    }
    camelCase[nbr_chars] = '\0';
    return (camelCase);
}
void	ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
        write(1, &str[i++], 1);
}
int main(int ac, char **av)
{
    if (ac == 2)
        ft_putstr(lowerCamelCase(av[1]));
    write(1, "\n", 1);
}
