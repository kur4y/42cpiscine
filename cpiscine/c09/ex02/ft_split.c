/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:26:31 by tanota            #+#    #+#             */
/*   Updated: 2022/11/10 23:48:45 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_verify(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_get_ac(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (ft_verify(str[i], charset) == 1)
			i++;
		if (ft_verify(str[i], charset) == 0
			&& str[i] != '\0')
		{
			count++;
			while (ft_verify(str[i], charset) == 0
				&& str[i] != '\0')
					i++;
		}
	}
	return (count + 1);
}

char	*ft_get_next_word(int *index, char *str, char *charset)
{
	int		len;
	char	*res;
	int		i;

	i = 0;
	len = 0;
	while (ft_verify(str[*index], charset))
		(*index)++;
	while (ft_verify(str[*index + len], charset) == 0
		&& str[*index + len])
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i++] = str[*index];
		*index = *index + 1;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		ac;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ac = ft_get_ac(str, charset);
	res = malloc(ac * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < ac - 1)
	{
		res[i] = ft_get_next_word(&j, str, charset);
		i++;
	}
	res[i] = 0;
	return (res);
}
