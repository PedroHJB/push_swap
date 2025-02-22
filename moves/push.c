/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:23:29 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/21 14:13:34 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int push(t_list **dst, t_list **src)
{
	t_list *tmp;
	t_list *head_to;
	t_list *head_from;

	if(ft_lstsize(*src) == 0)
		return (-1);
	head_to = *dst;
	head_from = *src;
	tmp = head_from;
	head_from = head_from->next;
	*src = head_from;

	if(!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*dst = head_to;
	}
	else
	{
		tmp->next = head_to;
		*dst = tmp;	
	}
	return 0;
}

int	pa(t_list **stack_a,  t_list **stack_b)
{
	if(push(stack_a ,  stack_b) == -1)
		return -1;
	write(1, "pa\n",3);
}

int	pb(t_list **stack_b,  t_list **stack_a)
{
	if(push(stack_b ,  stack_a) == -1)
		return -1;
	write(1, "pb\n",3);
}


