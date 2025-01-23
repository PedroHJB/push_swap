/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:26:47 by pede-jes          #+#    #+#             */
/*   Updated: 2025/01/23 14:27:27 by pede-jes         ###   ########.fr       */
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
void	ft_init_array(long martx[], int argc, char *argv[]);
void	ft_init_b(long martx[], int argc);
void	ft_pb(long martx[], long marty[]);
void	ft_r(long martx[]);
void	ft_rrg(long martx[]);
long	ft_len_populate(long martx[]);

int	main(int argc, char *argv[])
{
	long	stack_a[sizeof(argc)];
	long	stack_b[sizeof(argc)];

	ft_init_array(stack_a, argc, argv);
	ft_init_b(stack_b, argc);
	printf("\n------------------------A---------------------------\n");
	printf("\n----------------------INICIO------------------------\n");
	ft_print_array(stack_a);
	printf("\n------------------------B---------------------------\n");
	ft_print_array(stack_b);
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	printf("\n------------------------PB--------------------------\n");
	printf("\n------------------------A---------------------------\n");
	ft_print_array(stack_a);
	printf("\n------------------------B---------------------------\n");
	ft_print_array(stack_b);
	return (0);
}
void	ft_init_array(long martx[], int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < argc - 1)
	{
		martx[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	martx[i] = '\0';
}
void	ft_init_b(long martx[], int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		martx[i] = 999999999;
		i++;
	}
	martx[i] = '\0';
}

void	ft_r(long martx[])
{
	long	i;
	long	temp;

	i = ft_len_array(martx);
	i--;
	while (i > 0)
	{
		temp = martx[i - 1];
		martx[i - 1] = martx[i];
		martx[i] = temp;
		i--;
	}
}
void	ft_rrg(long martx[])
{
	long	i;
	long	j;
	long	temp;

	j = 0;
	i = ft_len_array(martx);
	i--;
	while (i > 0)
	{
		temp = martx[j + 1];
		martx[j + 1] = martx[j];
		martx[j] = temp;
		i--;
		j++;
	}
}
void	ft_pb(long martx[], long marty[])
{
	int	i;
	int	temp;
	int	len_marty;

	i = 0;
	temp = martx[0];
	len_marty = ft_len_populate(marty);
	marty[len_marty] = temp;
	ft_rrg(marty);
	martx[0] = 999999999;
	ft_rrg(martx);
}
void	ft_print_array(long martx[])
{
	long	i;

	i = 0;
	while (martx[i] != '\0')
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
long	ft_len_populate(long martx[])
{
	long	i;

	i = 0;
	while (martx[i] && martx[i] != 999999999)
	{
		i++;
	}
	return (i);
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
