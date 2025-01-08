/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iammar <iammar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:57:33 by iammar            #+#    #+#             */
/*   Updated: 2025/01/08 18:02:30 by iammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcsb/push_swap_bonus.h"

int	ft_strlen_b(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup_b(const char *s1)
{
	char	*p;
	int		len;
	int		j;

	len = ft_strlen_b((char *)s1);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	j = 0;
	while (s1[j])
	{
		p[j] = s1[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

char	*ft_strjoin_b(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s2)
		return (NULL);
	if (!s1)
		s1 = ft_strdup_b("");
	str = malloc(ft_strlen_b(s1) + ft_strlen_b(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';
	free(s1);
	return (str);
}

char	**ft_join_args_b(char **argv)
{
	char	*str;
	char	**res;
	int		i;

	i = 1;
	str = ft_strdup_b(" ");
	while (argv[i])
	{
		str = ft_strjoin_b(str, argv[i]);
		str = ft_strjoin_b(str, " \0");
		i++;
	}
	res = ft_split_b(str, ' ');
	free(str);
	return (res);
}

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
