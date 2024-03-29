/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:51:50 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:51:52 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	value = 0;
	sign = 1;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i] - '0';
		i++;
	}
	return (value * sign);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "Invalid parameters\n", 19);
		write(1, "Usage : ./exe.out x y\n", 22);
		return (-1);
	}
	rush02(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
