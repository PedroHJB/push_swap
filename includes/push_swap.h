/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:06:08 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/21 15:49:54 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_list
{
	int				value;
	int				index;

	struct s_list	*next;
}					t_list;

void				ft_error(int i);
int					ft_repeat(char **argv);
void				ft_check_args(int argc, char **argv);
int					main(int argc, char **argv);
void				init_stack(t_list **stack, char **argv);
t_list				*ft_lstnew(int value);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
t_list				*get_next_min(t_list **stack);
void				index_stack(t_list **stack);
int					ft_lstsize(t_list **stack_a);
int					push(t_list **dst, t_list **src);
int					pb(t_list **stack_b, t_list **stack_a);
int					pa(t_list **stack_a, t_list **stack_b);
int					rotate(t_list **stack);
int					ra(t_list **stack_a);
int					rb(t_list **stack_b);
int					swap(t_list **stack);
int					sa(t_list **stack_a);
int					sb(t_list **stack_b);
#endif