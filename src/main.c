/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:04:38 by pede-jes          #+#    #+#             */
/*   Updated: 2025/04/10 15:30:34 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list **stack_a;
    t_list **stack_b;

    if(argc < 2)
       return -1;
    check_args(argc,argv);
    stack_a = (t_list **)malloc(seizeof(t_list));
    stack_b = (t_list **)malloc(seizeof(t_list));
    stack_a = NULL;
    stack_b = NULL;
}