/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:12:12 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/14 17:46:28 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_error(4);
	if (argc == 2)
		ft_check_if_split(argv);
	else
		ft_check_args(argc, argv);
}
void	ft_check_if_split(char **argv)
{
	int		i;
	int		j;
	long	temp;
	char	**args;

	args = ft_split(argv[1], ' ');
	i = 0;
	while (args[i])
	{
		j = 0;
		if (args[i][j] == '-' || args[i][j] == '+')
			j++;
		while (args[i][j] != '\0')
		{
			if (args[i][j] < '0' || args[i][j] > '9')
				ft_error(1);
			j++;
		}
		temp = ft_atoi(args[i]);
		if (temp < INT_MIN || temp > INT_MAX)
			ft_error(2);
		i++;
	}
	if (ft_repeat(args))
		ft_error(3);
	i = 0;
	while (args[i])
		free(args[i++]);
	free(args);
	
}
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

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
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
