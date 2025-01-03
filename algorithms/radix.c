/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 09:48:32 by iammar            #+#    #+#             */
/*   Updated: 2025/01/03 14:05:30 by iammar           ###   ########.fr       */
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
	int	j;

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
t_stack *find_smallest(t_stack *a)
{
    int smallest_index;
    t_stack *smallest_node;

    smallest_index = -1;
    smallest_node = NULL;
    while (a)
    {
        if (smallest_index == -1 || a->index < smallest_index)
        {
            smallest_index = a->index;
            smallest_node = a;
        }
        a = a->next;
    }
    return (smallest_node);
}

t_stack *find_biggest(t_stack *a)
{
    int biggest_index;
    t_stack *biggest_node;

    biggest_index = -1;
    biggest_node = NULL;
    while (a)
    {
        if (biggest_index == -1 || a->index > biggest_index)
        {
            biggest_index = a->index;
            biggest_node = a;
        }
        a = a->next;
    }
    return (biggest_node);
}

void move_to_top(t_stack **a, t_stack *node)
{
    int size;
    t_stack *temp;
    int position;
    t_stack *current;

    size = 0;
    temp = *a;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    position = 0;
    current = *a;
    while (current != node)
    {
        position++;
        current = current->next;
    }
    if (position <= size / 2)
    {
        while (position-- > 0)
            ra(a);
    }
    else
    {
        position = size - position;
        while (position-- > 0)
            rra(a);
    }
}

void sort_stack(t_stack **a, t_stack **b, int size, int chunk_count)
{
    int chunk_size;
    int remainder;
    int i;
    
    chunk_size = size / chunk_count;
    remainder = size % chunk_count;
    i = 0;
    while (i < chunk_count)
    {
        int current_chunk_size = chunk_size + (i < remainder ? 1 : 0);
        int j = 0;

        while (j < current_chunk_size)
        {
            t_stack *smallest_node = find_smallest(*a);
            move_to_top(a, smallest_node);
            pb(a, b);
            j++;
        }
        i++;
    }
    while (*b)
    {
        pa(a, b);
    }
}