/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:05:37 by pede-jes          #+#    #+#             */
/*   Updated: 2025/04/10 13:10:59 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error(char **args, int free)
{
    if(free)
        ft_free(args);
    write(2,"Error\n",6);
    exit(EXIT_FAILURE);
}

