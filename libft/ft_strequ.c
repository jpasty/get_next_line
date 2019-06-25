/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpasty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 12:57:33 by jpasty            #+#    #+#             */
/*   Updated: 2019/04/23 19:57:56 by jpasty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (*s1 != *s2)
		return (0);
	while (*s1++ != 0 && *s2++ != 0)
	{
		if (*(unsigned char *)s1 - *(unsigned char *)s2 != 0)
			return (0);
	}
	return (1);
}
