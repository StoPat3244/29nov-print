/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main_printf__basic.c                               :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: cgazen <cgazen@student.42belgium.be>	   +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/11/25 14:14:43 by cgazen			#+#	#+#			 */
/*   Updated: 2025/11/26 04:20:09 by cgazen           ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void test_basic_conversions(void)
{
	int ret_std, ret_ft;
	
	printf("=== CONVERSIONS DE BASE ===\n");
	
	// %c - caractere
	ret_std = printf("%c%", 'A');
	ret_ft = ft_printf("%c%", 'A');
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std %%c: [%c]\n", 'A');
	ret_ft = ft_printf("ft  %%c: [%c]\n", 'A');
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %s - string
	ret_std = printf("std %%s: [%s]\n", "Hello");
	ret_ft = ft_printf("ft  %%s: [%s]\n", "Hello");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %d - decimal
	ret_std = printf("std %%d: [%d]\n", 42);
	ret_ft = ft_printf("ft  %%d: [%d]\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %i - entier
	ret_std = printf("std %%i: [%i]\n", -42);
	ret_ft = ft_printf("ft  %%i: [%i]\n", -42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %u - non signe
	ret_std = printf("std %%u: [%u]\n", 123456);
	ret_ft = ft_printf("ft  %%u: [%u]\n", 123456);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %x - hexadecimal minuscule
	ret_std = printf("std %%x: [%x]\n", 255);
	ret_ft = ft_printf("ft  %%x: [%x]\n", 255);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %X - hexadecimal majuscule
	ret_std = printf("std %%X: [%X]\n", 255);
	ret_ft = ft_printf("ft  %%X: [%X]\n", 255);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %p - pointeur
	int x = 42;
	ret_std = printf("std %%p: [%p]\n", &x);
	ret_ft = ft_printf("ft  %%p: [%p]\n", &x);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// %% - pourcentage
	ret_std = printf("std %%%%: [%%]\n");
	ret_ft = ft_printf("ft  %%%%: [%%]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);

	ret_std = printf("std %%%%: [%]");
	ret_ft = ft_printf("ft  %%%%: [%]");
	printf("\nret: std=%d, ft=%d\n\n", ret_std, ret_ft);

	ret_std = printf("std %%%%: [%");
	ret_ft = ft_printf("ft  %%%%: [%");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);

	// Multi
	ret_std = printf("std %c%%%p: [%s%]\n", 'A', &x,"test");
	ret_ft = ft_printf("ft  %c%%%p: [%s%]\n", 'A', &x, "test");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
}

void test_edge_cases(void)
{
	printf("=== CAS LIMITES ===\n");
	
	// Chaine NULL
	printf("std NULL: [%s]\n", NULL);
	ft_printf("ft  NULL: [%s]\n", NULL);
	
	// Caractere nul
	printf("std nullchar: [%c]\n", '\0');
	ft_printf("ft  nullchar: [%c]\n", '\0');
	
	// Pointeur NULL
	printf("std NULL ptr: [%p]\n", NULL);
	ft_printf("ft  NULL ptr: [%p]\n", NULL);
	
	// Entiers limites
	printf("std INT_MAX: [%d]\n", INT_MAX);
	ft_printf("ft  INT_MAX: [%d]\n", INT_MAX);
	
	printf("std INT_MIN: [%d]\n", INT_MIN);
	ft_printf("ft  INT_MIN: [%d]\n", INT_MIN);
	
	printf("std UINT_MAX: [%u]\n", UINT_MAX);
	ft_printf("ft  UINT_MAX: [%u]\n", UINT_MAX);
}

void test_multiple_args(void)
{
	printf("=== ARGUMENTS MULTIPLES ===\n");
	
	printf("std multi: [%c][%s][%d][%x][%%]\n", 'X', "test", 123, 255);
	ft_printf("ft  multi: [%c][%s][%d][%x][%%]\n", 'X', "test", 123, 255);
	
	printf("std multi: [%c][%s][%d][%x]%", 'X', "test", 123, 255);
	ft_printf("ft  multi: [%c][%s][%d][%x]%", 'X', "test", 123, 255);
}

void test_no_format(void)
{
	printf("=== SANS FORMAT ===\n");
	
	printf("std no format\n");
	ft_printf("ft  no format\n");
	
	printf("std empty string: []\n");
	ft_printf("ft  empty string: []\n");
}

int main(void)
{
	printf("=== TEST FT_PRINTF SANS BONUS ===\n\n");
	
	test_basic_conversions();
	test_edge_cases();
	test_multiple_args();
	test_no_format();
	
	printf("\n=== FIN DES TESTS ===\n");
	
	return (0);
}
