/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumeric.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorchyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:46:44 by akorchyn          #+#    #+#             */
/*   Updated: 2019/02/10 19:38:33 by akorchyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnumeric(char *str, int c)
{
	if (!str)
		return (0);
	while (*str && *str != c)
		if (!(ft_isdigit(*str++)))
			return (0);
	return (1);
}
