#include <unistd.h>

int main(int argc, char **argv)
{
	int i = -1;

	if (argc == 2)
	{
		while(argv[1][++i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write (1, "_", 1);
				argv[1][i] += 32;
			}
			write(1, &argv[1][i], 1);
		}
	}
	write (1, "\n", 1);
}