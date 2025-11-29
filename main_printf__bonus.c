/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main_printf__bonus.c                               :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: cgazen <cgazen@student.42belgium.be>	   +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/11/25 14:14:43 by cgazen			#+#	#+#			 */
/*   Updated: 2025/11/26 04:17:44 by cgazen           ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "ft_printf_bonus.h"
#include <stdio.h>
#include <limits.h>

void test_flags(void)
{
	int ret_std, ret_ft;
	
	printf("=== TEST FLAGS ===\n");
	
	// Flag '-'
	ret_std = printf("std: |%-10d|\n", 42);
	ret_ft = ft_printf("ft : |%-10d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Flag '0'
	ret_std = printf("std: |%05d|\n", 42);
	ret_ft = ft_printf("ft : |%05d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Flag ' ' (espace)
	ret_std = printf("std: |% d|\n", 42);
	ret_ft = ft_printf("ft : |% d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |% d|\n", -42);
	ret_ft = ft_printf("ft : |% d|\n", -42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Flag '+'
	ret_std = printf("std: |%+d|\n", 42);
	ret_ft = ft_printf("ft : |%+d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |%+d|\n", -42);
	ret_ft = ft_printf("ft : |%+d|\n", -42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Flag '#'
	ret_std = printf("std: |%#x|\n", 255);
	ret_ft = ft_printf("ft : |%#x|\n", 255);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |%#X|\n", 255);
	ret_ft = ft_printf("ft : |%#X|\n", 255);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
}

void test_width(void)
{
	int ret_std, ret_ft;
	
	printf("\n=== TEST WIDTH ===\n");
	
	// Width simple
	ret_std = printf("std: |%5d|\n", 42);
	ret_ft = ft_printf("ft : |%5d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Width avec texte
	ret_std = printf("std: |%10s|\n", "hello");
	ret_ft = ft_printf("ft : |%10s|\n", "hello");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Width avec caractere
	ret_std = printf("std: |%5c|\n", 'A');
	ret_ft = ft_printf("ft : |%5c|\n", 'A');
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Width avec zero
	ret_std = printf("std: |%05d|\n", 42);
	ret_ft = ft_printf("ft : |%05d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
}

void test_precision(void)
{
	int ret_std, ret_ft;
	
	printf("\n=== TEST PRECISION ===\n");
	
	// Precision entiers
	ret_std = printf("std: |%.5d|\n", 42);
	ret_ft = ft_printf("ft : |%.5d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |%.2d|\n", 42);
	ret_ft = ft_printf("ft : |%.2d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |%.0d|\n", 0);
	ret_ft = ft_printf("ft : |%.0d|\n", 0);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Precision strings
	ret_std = printf("std: |%.3s|\n", "hello");
	ret_ft = ft_printf("ft : |%.3s|\n", "hello");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |%.10s|\n", "hello");
	ret_ft = ft_printf("ft : |%.10s|\n", "hello");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Precision hexa
	ret_std = printf("std: |%.4x|\n", 255);
	ret_ft = ft_printf("ft : |%.4x|\n", 255);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
}

void test_combinations(void)
{
	int ret_std, ret_ft;
	
	printf("\n=== TEST COMBINAISONS ===\n");
	
	// Flags combines
	ret_std = printf("std: |%-+10d|\n", 42);
	ret_ft = ft_printf("ft : |%-+10d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |% -5d|\n", 42);
	ret_ft = ft_printf("ft : |% -5d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Width + Precision
	ret_std = printf("std: |%10.5d|\n", 42);
	ret_ft = ft_printf("ft : |%10.5d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: |%5.3s|\n", "hello");
	ret_ft = ft_printf("ft : |%5.3s|\n", "hello");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Zero + Width + Precision
	ret_std = printf("std: |%08.5d|\n", 42);
	ret_ft = ft_printf("ft : |%08.5d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Hash + Precision hexa
	ret_std = printf("std: |%#10.5x|\n", 255);
	ret_ft = ft_printf("ft : |%#10.5x|\n", 255);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	
}

void test_unexpected_behavior(void)
{
	int ret_std, ret_ft;
	
	printf("=== COMPORTEMENTS INATTENDUS ===\n\n");
	// 1. Formats invalides mais "complets"
	printf("1. Formats invalides complets:\n");
	ret_std = printf("std: [%c]\n");
	ret_ft = ft_printf("ft : [%c]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);

	ret_std = printf("std: [%-05p]\n");
	ret_ft = ft_printf("ft : [%-05p]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("%");
	ret_ft = ft_printf("%");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// 2. Formats incomplets
	printf("2. Formats incomplets:\n");
	ret_std = printf("std: [%]\n");
	ret_ft = ft_printf("ft : [%]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: [%-]\n");
	ret_ft = ft_printf("ft : [%-]\n");
	
	ret_std = printf("std: [%.3]\n");
	ret_ft = ft_printf("ft : [%.3]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: [%10.5.]\n");
	ret_ft = ft_printf("ft : [%10.5.]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// 3. Combinaisons bizarres
	printf("3. Combinaisons bizarres:\n");
	ret_std = printf("std: [%50.2.-----.....002----c]\n");
	ret_ft = ft_printf("ft : [%50.2.-----.....002----c]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: [%----5d]\n");
	ret_ft = ft_printf("ft : [%----5d]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// 4. Flags contradictoires
	printf("4. Flags contradictoires:\n");
	ret_std = printf("std: [%-05d]\n", 42);  // - et 0
	ret_ft = ft_printf("ft : [%-05d]\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: [%+ d]\n", 42);   // + et espace
	ret_ft = ft_printf("ft : [%+ d]\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// 5. Precisions etranges
	printf("5. Precisions etranges:\n");
	ret_std = printf("std: [%.35.0d]\n", 42);
	ret_ft = ft_printf("ft : [%.35.0d]\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: [%10.3.5d]\n", 42);   // double point
	ret_ft = ft_printf("ft : [%10.3.5d]\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);

	// 6. Cas avec %% 
	printf("6. Cas avec %%:\n");
	ret_std = printf("std: [%50.2%%]\n");
	ret_ft = ft_printf("ft : [%50.2%%]\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	ret_std = printf("std: [%%]%\n");
	ret_ft = ft_printf("ft : [%%]%\n");
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
/*	
	// 7. Largeurs/Precisions enormes
	printf("7. Valeurs extremes:\n");
	ret_std = printf("std: [%1000000d]\n", 42);
	ret_ft = ft_printf("ft : [%1000000d]\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	ret_std = printf("std: [%.1000000d]\n", 42);
	ret_ft = ft_printf("ft : [%.1000000d]\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
*/
}

void test_edge_cases_bonus(void)
{
	int ret_std, ret_ft;
	
	printf("\n=== CAS LIMITES BONUS ===\n");
	
	// Width avec negative
	ret_std = printf("std: |%-5.1d|\n", -42);
	ret_ft = ft_printf("ft : |%-5.1d|\n", -42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Precision avec negative
	ret_std = printf("std: |%1-5x|\n", -42);
	ret_ft = ft_printf("ft : |%1-5x|\n", -42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Width + Precision extremes
	ret_std = printf("std: |%20.000d|\n", 12345);
	ret_ft = ft_printf("ft : |%20.000d|\n", 12345);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// String NULL avec precision
	ret_std = printf("std: |%.5s|\n", NULL);
	ret_ft = ft_printf("ft : |%.5s|\n", NULL);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
	
	// Zero flag avec alignement gauche
	ret_std = printf("std: |%0-5.2d|\n", 42);
	ret_ft = ft_printf("ft : |%0-5.2d|\n", 42);
	printf("ret: std=%d, ft=%d\n\n", ret_std, ret_ft);
}

int main(void)
{
	printf("=== TEST FT_PRINTF AVEC BONUS ===\n\n");
	
	test_flags();
	test_width();
	test_precision();
	test_combinations();
	test_edge_cases_bonus();
	test_unexpected_behavior();
	
	printf("\n=== FIN DES TESTS BONUS ===\n");
	
	return (0);
}
