/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:27:43 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/20 13:32:17 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void index_stack(t_list **stack)
{
	t_list *head;
	int	index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index ++;
		get_next_min(stack);
	}
	
}

// void	sort_stack(t_list **stack_a, t_list **stack_b)
// {
// 	if(ft_lstsize(stack_a)<= 5)
// 		//simple_sort(stack_a)
// }



int	ft_lstsize(t_list **stack_a)
{
	int i;
	t_list *head;

	i = 0;
	head = *stack_a;
	while(head)
	{
		head = head-> next;
		i++;
	}

	return i;
}