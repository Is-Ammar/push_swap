/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:27:37 by iammar            #+#    #+#             */
/*   Updated: 2025/01/10 15:21:52 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_stack	*ft_lst_new_b(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	return (node);
}

void	append_node_b(t_stack **stack, int value)
{
	t_stack	*new_list;
	t_stack	*current;

	new_list = ft_lst_new_b(value);
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

void	error_exit_b(t_stack *stack, char **nums, int free_nums)
{
	if (stack)
		free_stack_b(stack);
	if (nums && free_nums)
		free_split_b(nums);
	write(2, "Error\n", 6);
	exit(1);
}

int	check_value_b(char *str, double *value)
{
	*value = ft_atoi_b(str);
	return (*value < INT_MIN || *value > INT_MAX);
}

t_stack	*parse_input_b(int argc, char **argv)
{
	t_stack	*stack;
	char	**nums;
	int		i;
	int		j;
	double	value;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		nums = ft_split_b(argv[i], ' ');
		if (!nums)
			error_exit_b(stack, NULL, 0);
		j = 0;
		while (nums[j])
		{
			if (!is_digit_string_b(nums[j]) || check_value_b(nums[j], &value))
				error_exit_b(stack, nums, 1);
			append_node_b(&stack, value);
			j++;
		}
		free_split_b(nums);
		i++;
	}
	if (is_duplicate_b(stack))
		error_exit_b(stack, NULL, 0);
	return (stack);
}
