#include <stdlib.h>
#include <stdio.h>
//#include "flood_fill.h"


typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}
void    ft_copy(char **tab, char **area, t_point size)
{
    for(int i = 0; i < size.y; i++)
        for (int j = 0; j < size.x; j++)
            tab[i][j] = area[i][j];
}
void  flood_(char **tab,  t_point size, t_point begin)
{
    t_point begin2;
    if (begin.y <  0 || begin.x < 0 || begin.x >= size.x || begin.y >= size.y || tab[begin.y][begin.x] == 'F')
        return ;
    if (tab[begin.y][begin.x] != '1' || tab[begin.y][begin.x] == 'F')
        return ;
    tab[begin.y][begin.x] = 'F';
    if (begin.x < size.x)
    {

        begin2.x = begin.x + 1;
        begin2.y = begin.y;
        flood_(tab, size, begin2);
    }
    if (begin.x >= 0)
    {
        begin2.x = begin.x - 1;
        begin2.y = begin.y;
        flood_(tab, size, begin2);
    }
    if (begin.y < size.y)
    {
        begin2.y = begin.y + 1;
        begin2.x = begin.x;
        flood_(tab, size, begin2);
    }
    if (begin.y >= 0)
    {
        begin2.y = begin.y - 1;
        begin2.x = begin.x;
        flood_(tab, size, begin2);
    }
}
void  flood_fill(char **tab, t_point size, t_point begin)
{
    t_point begin2;
    flood_(tab, size, begin);
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110101",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; i++)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {0, 0};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}