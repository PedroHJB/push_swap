/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:50:57 by pede-jes          #+#    #+#             */
/*   Updated: 2025/04/10 13:33:48 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>



static void cheak_args_direct( int argc, char **argv)
{
    int   i;
    long  tmp;
  
    i = 1;
    while(i < argc)
    {
      //provavel erro compatar is num com argv[char]
      tmp = ft_atoi(argv[1])
      if(!ft_isnum(argv[i]))
        error(NULL,0);
      if(contains(tmp,args,i))
        error(NULL,0);
      if(tmp <INT_MIN || tmp > INT_MAX)
        error(NULL,0);
        i++;
    }
  
}
static int contains(int num, char **argv, int i)
{
    i++;
    while(argv[i])
    {
      if(ft_atoi(argv[i])==num)
        return (1);
        i++;
    }
    return (0);
}
static void check_args_quoted(char **args)
{
  int i;
  long tmp;
  
  i = 0;
  if(!args[1])
    error(args,1);
  while(args[i])
  {
    tmp = ft_atoi(args[i])
    if(!ft_isnum(args[i]))
      error(args,1);
    if(contains(tmp,argv,i))
      error(NULL, 0);
    if(tmp < INT_MIN || tmp > INT_MAX)
      error(NULL,0);
    i++;
  }
}

void  check_args(int argc, char **argv)
{
    char **args;
    
    if (argc ==2)
    {
      args = ft_split(argv[1], ' '); 
      check_args_quoted(args);
    }
    else
    {
        check_args_direct(argc, argv);
    }
}