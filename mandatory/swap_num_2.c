/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_num_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:12:42 by mhanda            #+#    #+#             */
/*   Updated: 2022/09/25 20:11:28 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_data *ptr, int value)
{
	t_list	*temp;
	t_list	*temp2;

	if (ptr->stack_top_b && ptr->stack_top_b->link)
	{
		temp = ptr->stack_top_b;
		ptr->stack_top_b = ptr->stack_top_b->link;
		temp2 = ptr->stack_top_b;
		while (ptr->stack_top_b->link)
			ptr->stack_top_b = ptr->stack_top_b->link;
		ptr->stack_top_b->link = temp;
		ptr->stack_top_b = temp2;
		temp->link = NULL;
		if (value == 1)
			write(1, "rb\n", 3);
	}
}

void	rra(t_data *ptr, int value)
{
	t_list	*temp;

	if (ptr->stack_top_a && ptr->stack_top_a->link)
	{	
		temp = ptr->stack_top_a;
		if (temp->link)
		{
			while (temp->link->link)
				temp = temp->link;
			temp->link->link = ptr->stack_top_a;
			ptr->stack_top_a = temp->link;
			temp->link = NULL;
		}
		if (value == 1)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_data *ptr, int value)
{
	t_list	*temp;

	if (ptr->stack_top_b && ptr->stack_top_b->link)
	{
		temp = ptr->stack_top_b;
		if (temp->link)
		{
			while (temp->link->link)
				temp = temp->link;
			temp->link->link = ptr->stack_top_b;
			ptr->stack_top_b = temp->link;
			temp->link = NULL;
		}
		if (value == 1)
			write(1, "rrb\n", 4);
	}
}

void	double_mouve_ss_rr_rrr(t_data *ptr, int num, int value)
{
	if (num == 0)
	{
		sa(ptr, 0);
		sb(ptr, 0);
		if (value == 1)
			write(1, "ss\n", 3);
	}
	if (num == 1)
	{
		rb(ptr, 0);
		ra(ptr, 0);
		if (value == 1)
			write(1, "rr\n", 3);
	}
	if (num == 2)
	{
		rra(ptr, 0);
		rrb(ptr, 0);
		if (value == 1)
			write(1, "rrr\n", 4);
	}
}
