/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 01:44:12 by hfazaz            #+#    #+#             */
/*   Updated: 2025/01/10 10:27:05 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	list_length(t_stack *stack)
{
	int		length;
	t_stack	*current;

	length = 0;
	current = stack;
	while (current)
	{
		length++;
		current = current->next;
	}
	return (length);
}

int	*sort_arr(int *tab, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	get_max(t_stack *stack)
{
	int		max;
	t_stack	*current;

	max = INT_MIN;
	current = stack;
	while (current)
	{
		if (current->data > max)
			max = current->data;
		current = current->next;
	}
	return (max);
}

void	slide(int *start, int *end, int tab_size)
{
	(*start)++;
	(*end)++;
	if (*end == tab_size)
		*end = tab_size - 1;
}

int	find_max_index(t_stack *b, int max_val)
{
	int		max_index;
	t_stack	*current;

	max_index = 0;
	current = b;
	while (current)
	{
		if (current->data == max_val)
			break ;
		max_index++;
		current = current->next;
	}
	return (max_index);
}
