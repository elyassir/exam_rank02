/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:07:36 by yel-mass          #+#    #+#             */
/*   Updated: 2022/11/21 22:18:52 by yel-mass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that takes a string and displays its first word, followed by a
newline.

	A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

	If the number of parameters is not 1, or if there are no words, simply display
a newline.
 
*/
#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
