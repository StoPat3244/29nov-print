/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgazen <cgazen@student.42belgium.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 03:31:10 by cgazen            #+#    #+#             */
/*   Updated: 2025/11/26 05:34:20 by cgazen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf_bonus.h"

int	main()
{
	int rogn;
	int rftp;

	rogn = printf("%-+ #000");
	rftp = ft_printf("%-+ #000");
	printf("rogn = %d et rftp =%d\n", rogn, rftp);
	rogn = printf("%#01.2\n");
	rftp = ft_printf("%#01.2\n");
	printf("rogn = %d et rftp =%d\n", rogn, rftp);
	rogn = printf("%#+-01.2\n");
	rftp = ft_printf("%#+-01.2\n");
	printf("rogn = %d et rftp =%d\n", rogn, rftp);
}
