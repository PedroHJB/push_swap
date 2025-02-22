/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:13:50 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/21 15:21:45 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_list **stack)
{
	t_list	*head;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;
	
	if(ft_lstsize(*stack)<2)
		return -1;
	head = *stack;
	next = head->next;
	if(!head && !next)
	{
		write(1,"error\n", 6);
		exit(EXIT_FAILURE);
	}
	tmp_val = head->value;
	tmp_index = head->index;
	head->value = next->value;
	head->index = next->index;
	next->value = tmp_val;
	next->index = tmp_index;
	return 0;
}

int	sa(t_list **stack_a)
{
	if(swap(stack_a)== -1)
		return -1;
	write(1,"sa\n",3);
	return 0;
}

int	sb(t_list **stack_b)
{
	if(swap(stack_b)== -1)
		return -1;
	write(1,"sb\n",3);
	return 0;
}