/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerk <ljerk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:36:27 by rlintill          #+#    #+#             */
/*   Updated: 2019/11/21 19:01:50 by ljerk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t	ft_strlen(const char *str)
{
	unsigned	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
