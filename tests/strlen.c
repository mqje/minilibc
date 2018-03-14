/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strlen.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strlen_basic)
{
	cr_assert(strlen("Hello") == 5);
}

Test(ASM, strlen_empty_string)
{
	cr_assert(strlen("") == 0);
}

Test(ASM, strlen_basic2)
{
	cr_assert(strlen("AZERTYUIOP") == 10);
}
