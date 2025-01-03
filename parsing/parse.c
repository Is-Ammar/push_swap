/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:27:37 by iammar            #+#    #+#             */
/*   Updated: 2025/01/03 14:07:43 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lst_new(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	return (node);
}

void	append_node(t_stack **stack, int value)
{
	t_stack	*new_list;
	t_stack	*current;

	new_list = ft_lst_new(value);
	if (!*stack)
	{
		*stack = new_list;
		return ;
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = new_list;
}

t_stack	*parse_input(int argc, char **argv)
{
	t_stack	*stack;
	char	**nums;
	int		i;
	int		value;

	stack = NULL;
	if (argc < 2)
		return (NULL);
	if (argc == 2)
	{
		nums = ft_split(argv[1], ' ');
	}
	else
	{
		nums = argv + 1;
	}
	i = 0;
	while (nums[i])
	{
		value = ft_atoi(nums[i]);
		if (value < INT_MIN || value > INT_MAX)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		append_node(&stack, value);
		i++;
	}
	if (argc == 2)
	{
		free_split(nums, i);
	}
	return (stack);
}
