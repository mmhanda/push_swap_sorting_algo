/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 02:45:19 by mhanda            #+#    #+#             */
/*   Updated: 2022/09/25 22:30:11 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	continu_sort_tmp_stack(t_data *ptr, t_var *var, t_list *tmp1)
{
	while (var->len)
	{
		ptr->tmp_sort = tmp1;
		while (ptr->tmp_sort->link)
		{
			if (ptr->tmp_sort->data > ptr->tmp_sort->link->data)
			{
				var->count = ptr->tmp_sort->data;
				ptr->tmp_sort->data = ptr->tmp_sort->link->data;
				ptr->tmp_sort->link->data = var->count;
			}
			ptr->tmp_sort = ptr->tmp_sort->link;
		}
		var->len--;
	}
}

void	sort_tmp_stack(t_data *ptr)
{
	t_var	var;
	t_list	*tmp1;

	var.i = 0;
	var.len = 0;
	var.j = 0;
	var.count = 0;
	tmp1 = ptr->tmp_sort;
	while (ptr->tmp_sort)
	{
		ptr->tmp_sort = ptr->tmp_sort->link;
		var.len ++;
	}
	var.count = 0;
	continu_sort_tmp_stack(ptr, &var, tmp1);
	ptr->tmp_sort = tmp1;
	compair(ptr);
}
