/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:26:47 by pede-jes          #+#    #+#             */
/*   Updated: 2025/01/16 14:01:58 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int		ft_string_len(char *string);
int		ft_atoi(char *string);
void	ft_sa(int martx[]);
int		ft_cont_martx(int martx[]);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	stack_a[argc];
	int	stack_b[argc];

	i = 1;
	j = 0;
	while (j < argc - 1)
	{
		stack_a[j] = ft_atoi(argv[i]);
		printf("%p\n", stack_a[j]);
		i++;
		j++;
	}
	j = 0;
	while (j < argc - 1)
	{
		printf("Original:%d\n", stack_a[j]);
		j++;
	}
	ft_sa(stack_a);
	j = 0;
	while (j < argc - 1)
	{
		printf("invertida:%d\n", stack_a[j]);
		j++;
	}
	return (0);
}

void	ft_sa(int martx[])
{
	int	i;
	int	temp;

	i = ft_cont_martx(martx);
	temp = martx[i-1];
	martx[i-1] = martx[0];
	martx[0] = temp;
}

int	ft_cont_martx(int martx[])
{
	int	i;

	i = 0;
	while (martx[i])
	{
		i++;
	}
	return(i);
}
void	ft_pb(int martx[], int martry[])
{
	
}
int	ft_atoi(char *string)
{
	int	number;
	int	signal;
	int	i;

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
