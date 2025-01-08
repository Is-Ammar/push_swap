/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:23:42 by hfazaz            #+#    #+#             */
/*   Updated: 2025/01/06 15:05:45 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **a)
{
	if ((*a)->data > (*a)->next->data && (*a)->data > (*a)->next->next->data)
		ra(a);
	else if ((*a)->next->data > (*a)->data
		&& (*a)->next->data > (*a)->next->next->data)
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
}
