/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strstr.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strstr_basic)
{
	char data[] = "azertyuiop";

	cr_assert(strstr(data, "uio") == (data + 6));
}

Test(ASM, strstr_one_char)
{
	char data[] = "azertyuiop";

	cr_assert(strstr(data, "e") == (data + 2));
}

Test(ASM, strstr_not_found)
{
	char data[] = "azertyuiop";

	cr_assert(strstr(data, "zerta") == 0);
}

Test(ASM, strstr_empty)
{
	char data[] = "";

	cr_assert(strstr(data, "") == data);
}
