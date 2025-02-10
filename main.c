/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:12:12 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/10 17:24:39 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	ft_chek_args(argc, argv);
}
void	ft_check_args(int argc, char **argv)
{
	int i;
	long j;

	i = 0;
	

	while (i < argc)
	{
		if(argv[i] < '0' || argv[i]> '9')
			ft_error(1);
		if()
		i++;
	}
	
}
void	ft_error(int i)
{
	if(i==1)
	{
		write(2,"Just Numbers\n",13);
		exit(EXIT_FAILURE);
	}
	
}