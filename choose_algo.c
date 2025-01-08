/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:34:44 by iammar            #+#    #+#             */
/*   Updated: 2025/01/07 21:30:21 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->data > (*a)->next->data)
		ra(a);
}

void	choose_algo(t_stack **a, t_stack **b, char **av)
{
	int	size;
	int	len;

	size = list_length(*a);
	len = 0;
	while (av[len])
		len++;
	if (size == 2)
		sort_two(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else
		sort(a, b, len);
}
