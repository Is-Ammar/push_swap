/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:48:23 by hfazaz            #+#    #+#             */
/*   Updated: 2025/01/07 21:48:49 by iammar           ###   ########.fr       */
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

void	sort_five(t_stack **sa, t_stack **sb)
{
	while (list_length(*sa) > 3)
	{
		if ((*sa)->data == get_min(*sa) || (*sa)->data == get_max(*sa))
			pb(sa, sb);
		else
			ra(sa);
	}
	sort_three(sa);
	while (*sb)
	{
		pa(sa, sb);
		if ((*sa)->data == get_max(*sa))
			ra(sa);
	}
}
