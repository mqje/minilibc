/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** rindex.c
*/

#include <strings.h>
#include <criterion/criterion.h>

Test(ASM, rindex_basic)
{
	char data[] = "azertyuiop";

	cr_assert(rindex(data, 'u') == (data + 6));
}

Test(ASM, rindex_with_non_char)
{
	char data[] = "azertyuiop";

	cr_assert(rindex(data, 'w') == 0);
}

Test(ASM, rindex_with_empty_str)
{
	cr_assert(rindex("", 'a') == 0);
}

Test(ASM, rindex_with_doublon)
{
	char data[] = "aauzzzyeeerrrtttyyuuiiiaooppp";

	cr_assert(rindex(data, 'y') == (data + 17));
}
