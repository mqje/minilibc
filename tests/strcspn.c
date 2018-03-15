/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strcspn.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strcspn_basic)
{
	cr_assert(strcspn("salut", "u") == 3);
}

Test(ASM, strcspn_with_empty_delim)
{
	cr_assert(strcspn("salut", "") == 5);
}

Test(ASM, strcspn_with_multiple_delim)
{
	cr_assert(strcspn("salut", "tla") == 1);
}

Test(ASM, strcspn_with_delim)
{
	cr_assert(strcspn("salut", "wqm") == 5);
}
