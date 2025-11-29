/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf__hard.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgazen <cgazen@student.42belgium.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:03:24 by cgazen            #+#    #+#             */
/*   Updated: 2025/11/25 18:32:16 by cgazen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>

int	main()
{
	int ret_std;
	int ret_ft;
	int	a = 10;

	ret_std = printf("%c%20.3-", 'A');
	ret_ft = ft_printf("%c%20.3-", 'A');
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("%c%20.3-.1%", 'A');
	ret_ft = ft_printf("%c%20.3-.1%", 'A');
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("%c%20.3c", 'A');
	ret_ft = ft_printf("%c%20.3c", 'A');
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("% +p\n", &a);
	ret_ft = ft_printf("% +p\n", &a);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);

	ret_std = printf("%- 10.15p\n", &a);
	ret_ft = ft_printf("%- 10.15p\n", &a);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);

	ret_std =ft_printf("%-0#2.3w\n", "str");
	ret_ft =ft_printf("%-0#2.3w\n", "str");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
}
