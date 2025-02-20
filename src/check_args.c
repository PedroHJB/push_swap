/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:42:58 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/20 10:29:02 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_args(int argc, char **argv)
{
	int		i;
	int		j;
	long	num;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (argv[i][j] == '\0')
			ft_error(1);
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				ft_error(1);
			j++;
		}
		num = ft_atoi(argv[i]);
		if (num < INT_MIN || num > INT_MAX)
			ft_error(2);
		i++;
	}
	if (ft_repeat(argv))
		ft_error(3);
}
int	ft_repeat(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i],argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
void	ft_error(int i)
{
	if (i == 1)
	{
		write(2, "Just Numbers\n", 13);
		exit(EXIT_FAILURE);
	}
	if (i == 2)
	{
		write(2, "INT INVALID\n", 12);
		exit(EXIT_FAILURE);
	}
	if (i == 3)
	{
		write(2, "Do Not Repeat\n", 14);
		exit(EXIT_FAILURE);
	}
	if (i == 4)
	{
		write(2, "Invalid Number of Args\n", 23);
		exit(EXIT_FAILURE);
	}
}