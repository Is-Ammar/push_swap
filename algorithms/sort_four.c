/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 19:48:26 by hfazaz            #+#    #+#             */
/*   Updated: 2025/01/06 15:18:22 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four(t_stack **sa, t_stack **sb)
{
	while (list_length(*sa) > 3)
	{
		if (find_max_index(*sa, get_max(*sa)) >= (list_length(*sa) / 2))
		{
			while (find_max_index(*sa, get_max(*sa)) > 0)
				rra(sa);
		}
		else
		{
			while (find_max_index(*sa, get_max(*sa)) > 0)
				ra(sa);
		}
		pb(sa, sb);
	}
	sort_three(sa);
	pa(sa, sb);
	ra(sa);
}
