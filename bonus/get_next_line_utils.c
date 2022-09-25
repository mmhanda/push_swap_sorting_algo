/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:59:30 by mhanda            #+#    #+#             */
/*   Updated: 2022/09/25 21:25:43 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == (unsigned char)c)
		return (s + i);
	else
		return (0);
}

char	*ft_strjoinn(char *buffers, char *buff)
{
	int		i;
	int		j;
	char	*new;

	if (!buffers)
	{
		buffers = (char *)malloc(sizeof(char));
		buffers[0] = '\0';
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(buffers)
				+ ft_strlen(buff) + 1));
	if (new == 0)
		return (0);
	i = -1;
	j = 0;
	while (buffers[++i])
		new[i] = buffers[i];
	while (buff[j])
		new[i++] = buff[j++];
	new[ft_strlen(buffers) + ft_strlen(buff)] = '\0';
	free (buffers);
	return (new);
}
