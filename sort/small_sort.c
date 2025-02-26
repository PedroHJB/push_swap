/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:19:53 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/26 19:55:04 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min(t_list **stack, int val)
{
	t_list *head;
	int min;

	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return(min);
}

void	execute_sort_case(t_list **stack_a, int case_id, int min)
{
	if(case_id == 1)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if(case_id == 2)
	{
		if((*stack_a)->next->index == min)
			sa(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
	else if(case_id == 3)
	{
			if((*stack_a)->next->index == min)
				ra(stack_a);
			else
			{
				sa(stack_a);
				rra(stack_a);
			}
	}


void	sort_3(t_list **stack_a)
{
	int	min;
	int	next_min.;
	int	case_id;

	if(is_sorted(stack_a, -1))
		return;
	min = get_min(stack_a);
	case_id = 0;
	if((*stack_a)->index == min && (*stack_a)->next->index != next_min)
		case_id = 1;
	else if((stack_a)->index == next_min)
		case_id = 2;
	else
		case_id = 3;
	execute
}