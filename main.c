/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:26:47 by pede-jes          #+#    #+#             */
/*   Updated: 2025/01/16 16:43:31 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <unistd.h>

long	ft_string_len(char *string);
long	ft_atoi(char *string);
void	ft_sa(long martx[]);
long	ft_len_array(long martx[]);
void	ft_print_array(long martx[]);

int	main(int argc, char *argv[])
{
	long	i;
	long	j;
	long	stack_a[argc];
	long	stack_b[argc];

	i = 1;
	j = 0;
	while (j < argc - 1)
	{
		stack_a[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	stack_a[j] = '\0';
	printf("\n----------------------INICIO------------------------\n");
	ft_print_array(stack_a);
	ft_sa(stack_a);
	printf("\n---------------------INVERTIDO----------------------\n");
	ft_print_array(stack_a);
	return (0);
}
void	ft_print_array(long martx[])
{
	long	i;
	long	len_array;

	i = 0;
	len_array = ft_len_array(martx);
	while (martx[i])
	{
		printf("%ld\n", martx[i]);
		i++;
	}
}

void	ft_sa(long martx[])
{
	long	i;
	long	temp;

	i = ft_len_array(martx);
	temp = martx[i - 1];
	martx[i - 1] = martx[0];
	martx[0] = temp;
}

long	ft_len_array(long martx[])
{
	long	i;

	i = 0;
	while (martx[i])
	{
		i++;
	}
	return (i);
}
void	ft_pb(long martx[], long martry[])
{
}
long	ft_atoi(char *string)
{
	long	number;
	long	signal;
	long	i;

	signal = 1;
	i = 0;
	number = 0;
	while (string[i] == ' ' || string[i] == '\n' || string[i] == '\t'
		|| string[i] == '\v' || string[i] == '\f' || string[i] == '\r')
	{
		i++;
	}
	if (string[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (string[i] != '\0')
	{
		if (string[i] > '9' || string[i] < '0')
			return (write(1, "error", 5));
		number = (number * 10) + (string[i] - '0');
		i++;
	}
	return (signal * number);
}
