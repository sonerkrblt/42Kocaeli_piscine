/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarabul <skarabul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:00:34 by skarabul          #+#    #+#             */
/*   Updated: 2023/02/11 11:08:31 by skarabul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{		
		if (!(str[i] >= 'a' && str[i] <= 'z'))
	    {
			return (0);
     	}
	    i++;
    }
	return (1);
}

int main()
{
	char str[] = "zxxhjc";
	int sayiyap = ft_str_is_lowercase(str);
	printf("%d\n", sayiyap);
	char str1[] = "12345";
    sayiyap = ft_str_is_lowercase(str1);
	printf("%d\n", sayiyap);
	return 0;
}
