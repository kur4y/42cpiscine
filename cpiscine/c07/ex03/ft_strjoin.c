/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:25:35 by tanota            #+#    #+#             */
/*   Updated: 2022/10/03 23:40:56 by tanota           ###   ########.fr       */
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

int	ft_ultimate_str(char **str, int size)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		res += ft_strlen(str[i]);
		i++;
	}
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 1;
	tab = malloc((ft_ultimate_str(strs, size) + (size - 1)
				* ft_strlen(sep) + 1) * sizeof(char));
	if (!tab)
		return (0);
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	tab[ft_ultimate_str(strs, size) + (size - 1) * ft_strlen(sep) + 1] = '\0';
	return (tab);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}*/
