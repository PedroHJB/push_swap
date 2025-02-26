/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverce_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:30:53 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/25 17:19:04 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	reverce_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}
int	rra(t_list **stack_a)
{
	if (reverce_rotate(stack_a) == -1)
		return (-1);
	write(1, "rra\n", 4);
	return (0);
}
int	rrb(t_list **stack_b)
{
	if (reverce_rotate(stack_b) == -1)
		return (-1);
	write(1, "rrb\n", 4);
	return (0);
}
int	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(stack_a) < 2) || (ft_lstsize(stack_b) < 2))
		return (-1);
	reverce_rotate(stack_a);
	reverce_rotate(stack_b);
	write(1, "rrr\b", 4);
	return (0);
}