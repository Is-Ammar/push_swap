/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:26:47 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 17:43:29 by iammar           ###   ########.fr       */
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

int	*fill_arr(t_stack *a)
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
	if (!str)
	{
		return (0);
	}
	if (*str == '-')
	{
		str++;
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

void	indexing(t_stack *a, int *arr, int len)
{
	t_stack	*current;
	int		i;

	current = a;
	while (current)
	{
		i = 0;
		while (i < len)
		{
			if (current->data == arr[i])
			{
				current->index = i;
				break ;
			}
			i++;
		}
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*arr;
	int		i;
	char	**av;

	b = NULL;
	i = 1;
	av = NULL;
	a = parse_input(argc, argv);
	arr = fill_arr(a);
	i = list_length(a);
	valid(arr, i, a);
	av = ft_join_args(argv);
	arr = sort_tab(arr, i);
	indexing(a, arr, i);
	choose_algo(&a, &b, av);
	free_stack(a);
	free(arr);
	free_split(av);
	return (0);
}
// while (a)
// {
// 	printf("%d\n", a->data);
// 	a = a->next;
// }
// printf("stack b ----------->:\n");
// while (b)
// {
// 	printf("%d\n", b->data);
// 	b = b->next;
// }