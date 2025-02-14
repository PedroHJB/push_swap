/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:06:08 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/14 15:31:14 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;

	struct s_list	*next;
}					t_list;

void				ft_error(int i);
int					ft_repeat(char **argv);
void	ft_check_args(int argc, char **argv);
int	main(int argc, char **argv);



#endif