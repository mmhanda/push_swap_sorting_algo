/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_3_5_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 02:49:31 by mhanda            #+#    #+#             */
/*   Updated: 2022/09/25 20:02:28 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_max(t_data *ptr)
{
	t_list	*tmp;

	tmp = ptr->stack_top_a;
	max_a(ptr);
	maxposa(ptr);
	if (ptr->point <= 3)
	{	
		while (ptr->point)
		{
			ra(ptr, 1);
			ptr->point--;
		}
	}
	else
	{
		ptr->point = 5 - ptr->point;
		while (ptr->point)
		{
			rra(ptr, 1);
			ptr->point--;
		}
	}
	pb(ptr, 1);
}

void	push_min(t_data *ptr)
{
	t_list	*tmp;

	tmp = ptr->stack_top_a;
	min(ptr);
	minposa(ptr);
	if (ptr->pointam <= 3)
	{
		while (ptr->pointam)
		{
			ra(ptr, 1);
			ptr->pointam--;
		}
	}
	else
	{
		ptr->pointam = 5 - ptr->pointam;
		while (ptr->pointam)
		{
			rra(ptr, 1);
			ptr->pointam--;
		}
	}
	pb(ptr, 1);
}

int	maxposa(t_data *ptr)
{
	t_list	*tmp;

	tmp = ptr->stack_top_a;
	ptr->point = 0;
	while (tmp != ptr->maxa)
	{
		ptr->point++;
		tmp = tmp->link;
	}
	return (ptr->point);
}

int	minposa(t_data *ptr)
{
	t_list	*tmp;

	tmp = ptr->stack_top_a;
	ptr->pointam = 0;
	while (tmp != ptr->min)
	{
		ptr->pointam++;
		tmp = tmp->link;
	}
	return (ptr->pointam);
}
