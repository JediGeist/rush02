/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrempel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 22:48:35 by lrempel           #+#    #+#             */
/*   Updated: 2018/09/22 23:17:07 by lrempel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void left(int i, int a)
{
	if (i == 0)
	{
		ft_putchar('A');
	}
	else if (i == a - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void right(int i, int a)
{
	if (i == 0)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (i == a - 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void up_down(int i, int a)
{
	if (i == 0 || i == a - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void rush(int b, int a)
{
	int i;
	int j;

	i = 0;
	while (i < a)
	{
		j = 0;
		while (j < b)
		{
			if (j == 0)
			{
				left(i, a);
			}
			else if (j == b - 1)
			{
				right(i, a);
			}
			else
			{
				up_down(i, a);
			}
			j++;
		}
		i++;
	}
}

int main()
{
	rush(5, 4);
	return (0);
}
