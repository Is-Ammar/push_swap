/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:21:26 by iammar            #+#    #+#             */
/*   Updated: 2025/01/07 21:43:18 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	is_duplicate(int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
