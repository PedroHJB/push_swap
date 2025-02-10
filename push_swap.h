/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:06:08 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/10 17:11:43 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int value;
	int next;

	struct s_list *next;
}	t_list;

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>



#endif