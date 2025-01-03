/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:28:11 by iammar            #+#    #+#             */
/*   Updated: 2024/12/30 22:13:41 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int max(t_stack *a) 
{
    int max_value = a->data;
    int max_index = 0;
    int current_index = 0;

    t_stack *current = a->next;

    while (current) 
    {
        current_index++;
        if (current->data > max_value) 
        {
            max_value = current->data; 
            max_index = current_index;
        }
        current = current->next;
    }
    return max_index;
}
void	sort_three(t_stack **a)
{
	int	i;

	i = max(*a);
	if (i == 0)
		ra(a);
	if (i == 1)
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
	else
		return ;
}
