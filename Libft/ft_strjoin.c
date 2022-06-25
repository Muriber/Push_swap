/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:51:53 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/04 11:31:24 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	ss1;
	unsigned long	ss2;
	char			*new_s;
	unsigned long	count;

	count = 0;
	if (!s1 || !s2)
		return (NULL);
	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	new_s = malloc((sizeof(char) * (ss1 + ss2 + 1)));
	if (new_s == NULL)
		return (NULL);
	while (count < ss1 + ss2)
	{
		if (count < ss1)
			new_s[count] = s1[count];
		else if (count >= ss1)
			new_s[count] = s2[count - ss1];
		count++;
	}
	new_s[count] = '\0';
	return (new_s);
}
