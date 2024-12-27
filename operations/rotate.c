/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:31:47 by iammar            #+#    #+#             */
/*   Updated: 2024/12/27 14:33:44 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **sb)
{
	t_stack	*first;
	t_stack	*last;

	first = *sb;
	*sb = (*sb)->next;
	first->next = NULL;
	last = *sb;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = first;
	write(1, "rb\n", 3);
}