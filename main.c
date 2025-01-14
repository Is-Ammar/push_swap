/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:26:47 by iammar            #+#    #+#             */
/*   Updated: 2025/01/14 20:05:19 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

int	*put_array(t_stack *a)
{
	int	*arr;
	int	i;
	int	size;

	size = list_length(a);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (size == 0)
	{
		free(arr);
		exit(1);
	}
	i = 0;
	while (a)
	{
		arr[i] = a->data;
		a = a->next;
		i++;
	}
	return (arr);
}

int	is_digit_string(const char *str)
{
	if (!str || !(*str))
	{
		return (0);
	}
	if (*str == '-' || *str == '+')
    {
        str++;
        if (*str < '0' || *str > '9')
        {
            return 0;
        }
    }
	while (*str)
	{
		if (*str == ' ' || *str == '\t')
		{
			str++;
		}
		else if (*str < '0' || *str > '9')
		{
			return (0);
		}
		else
		{
			str++;
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*arr;
	int		i;

	b = NULL;
	i = 1;
	a = parse_input(argc, argv);
	arr = put_array(a);
	i = list_length(a);
	valid(arr, i, a);
	arr = sort_arr(arr, i);
	choose_algo(&a, &b, arr);
	free_stack(a);
	free(arr);
	return (0);
}
