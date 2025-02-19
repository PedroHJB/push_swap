/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:10:30 by pede-jes          #+#    #+#             */
/*   Updated: 2025/02/19 17:34:15 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_list **stack, char **argv)
{
	t_list *new;
	int		i;

	new = NULL;
	i = 1;
	while (argv[i])
	{
		new = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	
}

t_list	*ft_lstnew(int value)
{
	t_list *new;
	

	new = (t_list *) malloc(sizeof(*new));
	if(!new)
	{
		free(new);
		return(NULL);
	}
	new->value = value;
	new->index = -1;
	new-> next= NULL;
	return(new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	
	if(!new)
		return;
	if(!*lst)
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	
}
t_list	*ft_lstlast(t_list *lst)
{
	t_list *last;

	last = lst;
	while (last-> next)
	{
		last = last->next;
		if(last->next == NULL)
			return (last);
	}
	return (last);
	
}

t_list	*get_next_min(t_list **stack)
{
	t_list	*current;
	t_list	*min_node;

	current = *stack;
	min_node = NULL;
	while (current)
	{
		if(!min_node || current->value < min_node-> value)
			min_node = current;

		current = current-> next;
	}
	
	return(min_node);
	
}

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