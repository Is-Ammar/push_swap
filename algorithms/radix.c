/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 09:48:32 by iammar            #+#    #+#             */
/*   Updated: 2024/12/27 21:49:01 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	list_length(t_stack *stack)
{
	int	length;

	length = 0;
	while (stack)
	{
		length++;
		stack = stack->next;
	}
	return (length);
}

void	sort_array(int *arr, int size)
{
	int	i;
	int	tmp;
    int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	indexing(t_stack *stack)
{
	int		size;
	int		*arr;
	t_stack	*temp;
	int		i;

	size = list_length(stack);
	arr = malloc(size * sizeof(int));
	temp = stack;
	i = 0;
	while (temp)
	{
		arr[i++] = temp->data;
		temp = temp->next;
	}
	sort_array(arr, size);
	temp = stack;
	while (temp)
	{
		i = 0;
		while (i < size)
		{
			if (temp->data == arr[i])
			{
				temp->index = i;
				break ;
			}
			i++;
		}
		temp = temp->next;
	}
	free(arr);
}
void	radix_sort(t_stack **a, t_stack **b)
{
	int		max_bits;
	int		i;
	t_stack	*current;
    int j;
    int size;

	i = 0;
	size = list_length(*a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			current = *a;
			if (((current->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
