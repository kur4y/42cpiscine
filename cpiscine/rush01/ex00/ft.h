/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:55:45 by tanota            #+#    #+#             */
/*   Updated: 2022/11/19 15:55:51 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		**init_tab(char *str);
int		check_row_up(int **tab, int row);
int		check_row_down(int **tab, int row);
int		check_line_left(int **tab, int line);
int		check_line_right(int **tab, int line);
int		ft_left(int **tab, int index, int value);
int		ft_up(int **tab, int index, int value);
int		is_valid_value(int **tab, int index, int value);
int		is_valid_array(int **tab);
int		ft_solve(int **tab, int index);
void	ft_print_tab(int **tab);

#endif