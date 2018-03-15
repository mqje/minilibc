/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strcmp.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strcmp_with_equal_str)
{
	cr_assert(strcmp("Salut", "Salut") == 0);
}

Test(ASM, strcmp_with_different_pos_str)
{
	cr_assert(strcmp("salut", "Salut") > 0);
}

Test(ASM, strcmp_with_different_neg_str)
{
	cr_assert(strcmp("Salut", "salut") < 0);
}

Test(ASM, strcmp_with_one_empty_str)
{
	cr_assert(strcmp("salut", "") > 0);
}

Test(ASM, strcmp_with_two_empty_str)
{
	cr_assert(strcmp("", "") == 0);
}
