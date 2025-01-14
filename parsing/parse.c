/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:27:37 by iammar            #+#    #+#             */
/*   Updated: 2025/01/07 21:23:26 by iammar           ###   ########.fr       */
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

void	error_exit(t_stack *stack, char **nums, int free_nums)
{
	if (stack)
		free_stack(stack);
	if (nums && free_nums)
		free_split(nums);
	write(2, "Error\n", 6);
	exit(1);
}

int	check_value(char *str, double *value)
{
	*value = ft_atoi(str);
	return (*value < INT_MIN || *value > INT_MAX);
}

t_stack	*parse_input(int argc, char **argv)
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
		nums = ft_split(argv[i], ' ');
		if (!nums)
			error_exit(stack, NULL, 0);
		j = 0;
		while (nums[j])
		{
			if (!is_digit_string(nums[j]) || check_value(nums[j], &value))
				error_exit(stack, nums, 1);
			append_node(&stack, value);
			j++;
		}
		free_split(nums);
		i++;
	}
	return (stack);
}
