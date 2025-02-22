/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 15:37:15 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/21 15:48:35 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rotate(t_list **stack)
{
	t_list *head;
	t_list *tail;
	
	if(ft_lstsize(stack) < 2)
		return -1;
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail -> next = head;
	return 0;
}
int	ra(t_list **stack_a)
{
	if(rotate(stack_a)== -1)
		return -1;
	write(1,"ra\n",3);
}
int	rb(t_list **stack_b)
{
	if(rotate(stack_b)== -1)
		return -1;
	write(1,"rb\n",3);
}
