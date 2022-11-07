/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:09:16 by tanota            #+#    #+#             */
/*   Updated: 2022/09/26 17:34:42 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main()
{
	char str1[] = "abcde";
	char str2[] = "abcd";
	
	printf("my function %d\ninitial function %d",
			ft_strncmp(str1, str2, 10), strncmp(str1, str2, 10));
}
*/
