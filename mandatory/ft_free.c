/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 06:01:31 by mhanda            #+#    #+#             */
/*   Updated: 2022/09/25 22:20:18 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_free(t_data *ptr, int i)
{
	t_list	*tmp;

	if (ptr->stack_top_a)
	{
		while (ptr->stack_top_a)
		{
			tmp = ptr->stack_top_a;
			ptr->stack_top_a = ptr->stack_top_a->link;
			free(tmp);
		}
	}
	if (i == 1)
		write(2, "Error\n", 6);
	exit(0);
}

void	check_max_min_atoi(long long ok, long long sing)
{
	if ((ok * sing) > 2147483647 || (ok * sing) < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	error_and_exit(t_data *data)
{
	(void)data;
	write(2, "Error\n", 6);
	exit(0);
}
