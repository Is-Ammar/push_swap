/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:48:23 by hfazaz            #+#    #+#             */
/*   Updated: 2025/01/09 13:50:51 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->data;
	while (stack)
	{
		if (stack->data < min)
			min = stack->data;
		stack = stack->next;
	}
	return (min);
}

void	sort_five(t_stack **a, t_stack **b)
{
	while (list_length(*a) > 3)
	{
		if ((*a)->data == get_min(*a) || (*a)->data == get_max(*a))
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	while (*b)
	{
		pa(a, b);
		if ((*a)->data == get_max(*a))
			ra(a);
	}
}
