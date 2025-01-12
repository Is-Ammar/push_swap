/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:01:07 by iammar            #+#    #+#             */
/*   Updated: 2025/01/10 15:55:56 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./srcsb/push_swap_bonus.h"

int	sorted(t_stack *a)
{
	t_stack	*current;

	if (a == NULL || a->next == NULL)
	{
		return (1);
	}
	current = a;
	while (current->next != NULL)
	{
		if (current->data > current->next->data)
		{
			return (0);
		}
		current = current->next;
	}
	return (1);
}

int	is_duplicate_b(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->data == tmp->data)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}
