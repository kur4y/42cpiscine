/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:30:15 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 14:31:25 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int *f(char *))
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
