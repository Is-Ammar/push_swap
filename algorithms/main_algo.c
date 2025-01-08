/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:58:18 by hfazaz            #+#    #+#             */
/*   Updated: 2025/01/07 21:48:22 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_end_values(int len, int *end)
{
	if (len > 5 && len <= 100)
		*end = len / 6;
	else
		*end = 35;
}

void	sort_a(t_stack **a, t_stack **b, int len)
{
	int	start;
	int	end;

	start = 0;
	set_end_values(len, &end);
	while (*a != NULL)
	{
		if ((*a)->index >= start && (*a)->index <= end)
		{
			pb(a, b);
			slide(&start, &end, len);
		}
		else if ((*a)->index < start)
		{
			pb(a, b);
			rb(b);
			slide(&start, &end, len);
		}
		else
			ra(a);
	}
}

void	rotate_to_max(t_stack **b, int max_val, int max_index, int middle)
{
	if (max_index <= middle)
	{
		while ((*b)->data != max_val)
			rb(b);
	}
	else
	{
		while ((*b)->data != max_val)
			rrb(b);
	}
}

void	sort_b(t_stack **a, t_stack **b)
{
	int	max_val;
	int	middle;
	int	max_index;

	while (*b != NULL)
	{
		max_val = get_max(*b);
		middle = list_length(*b) / 2;
		max_index = find_max_index(*b, max_val);
		rotate_to_max(b, max_val, max_index, middle);
		pa(a, b);
	}
}

void	sort(t_stack **a, t_stack **b, int len)
{
	sort_a(a, b, len);
	sort_b(a, b);
}
