/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strncmp.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strncmp_basic)
{
	cr_assert(strncmp("salut", "salut", 5) == 0);
}

Test(ASM, strncmp_basic_diff)
{
	cr_assert(strncmp("salut", "sal", 5) > 0);
}

Test(ASM, strncmp_with_cut_str)
{
	cr_assert(strncmp("salUT", "salut", 3) == 0);
}

Test(ASM, strncmp_with_bigger_size)
{
	cr_assert(strncmp("salUT", "salut", 10) < 0);
}
