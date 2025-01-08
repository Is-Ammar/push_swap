/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:56:53 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 17:30:36 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./srcsb/push_swap_bonus.h"

void	free_stack_b(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

int	is_digit_string_b(const char *str)
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

int	sorted_b(t_stack *a)
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

int	compare(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strcmp_b(line, "sa"))
		sa_b(a);
	else if (!ft_strcmp_b(line, "sb"))
		sb_b(b);
	else if (!ft_strcmp_b(line, "ss"))
		ss_b(a, b);
	else if (!ft_strcmp_b(line, "ra"))
		ra_b(a);
	else if (!ft_strcmp_b(line, "rb"))
		rb_b(b);
	else if (!ft_strcmp_b(line, "rr"))
		rr_b(a, b);
	else if (!ft_strcmp_b(line, "rra"))
		rra_b(a);
	else if (!ft_strcmp_b(line, "rrb"))
		rrb_b(b);
	else if (!ft_strcmp_b(line, "rrr"))
		rrr_b(a, b);
	else if (!ft_strcmp_b(line, "pa"))
		pa_b(b, a);
	else if (!ft_strcmp_b(line, "pb"))
		pb_b(a, b);
	else
	{
		free_stack_b(*a);
		free_stack_b(*b);
		free(line);
		write(2, "Error\n", 6);
		return (1);
	}
	free(line);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	b = NULL;
	a = parse_input_b(argc, argv);
	while (1337)
	{
		line = get_next_line(0);
		if (!line || !*line)
		{
			free(line);
			break ;
		}
		if (compare(line, &a, &b) == 1)
		{
			exit(1);
		}
	}
	if (sorted_b(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if (b)
	{
		free_stack_b(b);
	}
	free_stack_b(a);
}