/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:02:53 by iammar            #+#    #+#             */
/*   Updated: 2025/01/10 20:23:57 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./srcsb/push_swap_bonus.h"

char	*get_next_line(int fd)
{
	char	line[80000];
	int		readbyte;
	char	buff;
	int		i;

	readbyte = 1;
	i = 0;
	buff = 0;
	line[i] = 0;
	while (readbyte)
	{
		readbyte = read(fd, &buff, 1);
		if (readbyte <= 0)
			break ;
		if (buff == '\n')
			break ;
		line[i++] = buff;
		line[i] = 0;
	}
	if (!*line)
		return (NULL);
	return (ft_strdup_b(line));
}

int	ft_strcmp_b(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

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

void	ok_ko(t_stack *a, int size)
{
	if ((size == list_length(a)) && sorted_b(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
