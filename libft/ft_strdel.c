/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:49:15 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/27 15:06:50 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./includes/libft.h"

void	ft_strdel(char **tofree)
{
	if (tofree)
	{
		free(*tofree);
		*tofree = NULL;
	}
}
