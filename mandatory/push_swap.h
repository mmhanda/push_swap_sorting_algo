/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 03:07:22 by mhanda            #+#    #+#             */
/*   Updated: 2023/02/25 01:01:13 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	long long		data;
	struct s_list	*link;
}	t_list;

typedef struct s_var
{
	int	k;
	int	f;
	int	i;
	int	j;
	int	len;
	int	count;
}	t_var;

typedef struct s_jme3
{
	int		i;
	int		f;
	int		j;
	char	**split;
}	t_j;

typedef struct s_data
{
	int		log_len_a;
	t_list	*stack_top_b;
	t_list	*tmp_sort;
	t_list	*maxb;
	t_list	*maxa;
	t_list	*min;
	t_list	*nodes;	
	int		decide;
	int		decide2;
	int		pointam;
	int		point;
	int		lenb;
	int		lena;
	int		sacend_len_a;
	t_list	*stack_top_a;
	t_list	*stack_end_a;
}	t_data;
void		pb(t_data *ptr, int value);
void		pa(t_data *ptr, int value);
void		rrb(t_data *ptr, int value);
void		rra(t_data *ptr, int value);
void		rb(t_data *ptr, int value);
void		ra(t_data *ptr, int value);
void		sa(t_data *ptr, int value);
void		sb(t_data *ptr, int value);
void		*ft_memset(void *str, int c, size_t len);
void		error_and_exit(t_data *data);
void		check_max_min_atoi(long long ok, long long sing);
void		do_free(t_data *ptr, int i);
void		get_addr_end(t_data *ptr);
void		decide_sort(t_data *ptr);
void		sort_5(t_data *ptr);
void		push_min(t_data *ptr);
void		push_max(t_data *ptr);
void		sf_split(t_list *node, char **av, t_data *data);
void		push_to_a(t_data *ptr);
void		max(t_data *ptr);
void		sort_tmp_stack(t_data *ptr);
void		laod_stack_tmp(t_data *ptr);
void		compair(t_data *ptr);
void		double_mouve_ss_rr_rrr(t_data *ptr, int num, int value);
void		check_sort_stack(t_data *ptr);
void		cmp_A(t_data *ptr);
void		check_double_arg(t_list *ptr, t_list *node, t_data *data);
void		f_split(t_list *node, char **av, t_data *data);
void		full_pos(t_data *ptr);
char		*ft_strjoinn(char *buffers, char *buff);
char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *s1, char *s2);
char		**merge_and_do_space(char **av);
char		*get_next_line(int fd);
char		**ft_split(char const *s, char c);
int			get_len_a(t_data *ptr);
int			maxpos(t_data *ptr);
int			emty_str(char *str);
int			get_len(t_data *ptr);
int			minposa(t_data *ptr);
int			sscheck_sort_stack(t_data *ptr);
int			sort_3(t_data *ptr);
int			maxposa(t_data *ptr);
int			max_a(t_data *ptr);
int			min(t_data *ptr);
int			ssort_3(t_data *ptr);
int			scheck_sort_stack(t_data *ptr);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_strlen(char *c);
int			ft_intcmp(long long *s1, long long *s2);
long long	ft_atoi(char *s, t_data *data);
#endif