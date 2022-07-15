/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwjeo <chanwjeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 16:30:28 by chanwjeo          #+#    #+#             */
/*   Updated: 2022/07/15 12:01:39 by chanwjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ss;

	ss = s;
	while (*s)
		s++;
	while (*s != (char)c)
	{
		if (*s == *ss)
			return (0);
		s--;
	}
	return ((char *)s);
}
