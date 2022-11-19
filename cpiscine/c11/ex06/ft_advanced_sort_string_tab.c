/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:02:13 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:02:35 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int *cmp(char *, char *))
{
	int	i;
	int	tabsize;

	i = 0;
	tabsize = 0;
	while (tab[tabsize])
		tabsize++;
	while (i < tabsize - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_strswap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
