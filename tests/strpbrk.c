/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strpbrk.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strpbrk_basic)
{
	char data[] = "azertyuiop";

	cr_assert(strpbrk(data, "u") == (data + 6));
}

Test(ASM, strpbrk_with_multiple_accept)
{
	char data[] = "azertyuiop";

	cr_assert(strpbrk(data, "uro") == (data + 3));
}

Test(ASM, strpbrk_with_empty_accept_and_null)
{
	cr_assert(strpbrk("azertyuiop", "") == 0);
	cr_assert(strpbrk(NULL, "") == 0);
}

Test(ASM, strpbrk_with_non_finding)
{
	cr_assert(strpbrk("azertyuiop", "vjhg") == 0);
}

Test(ASM, strpbrk_with_multiple_find)
{
	char data[] = "aauzzzyeeerrrtttyyuuiiiaooppp";

	cr_assert(strpbrk(data, "yeop") == (data + 6));
}
