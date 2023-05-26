/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:37:46 by szerisen          #+#    #+#             */
/*   Updated: 2023/04/06 17:46:10 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
/* will return a pointer to the position of first appearance of c in s
** will return a pointer to NULL if not found */
{
	char	a;
	int		i;

	if (!s)
		return (NULL);
	a = c;
	i = 0;
	while (s && s[i] != '\0' && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *)(s + i));
	else
		return (NULL);
}
