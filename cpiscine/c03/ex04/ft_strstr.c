/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:22:22 by tanota            #+#    #+#             */
/*   Updated: 2022/11/09 13:36:01 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[n])
		{
			while (str[i + n] == to_find[n])
			{
				n++;
				if (to_find[n + 1] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
