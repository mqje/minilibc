/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strchr
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strchr_basic)
{
	char data[] = "azertyuiop";

	cr_assert(strchr(data, 'r') == (data + 3));
}

Test(ASM, strchr_with_non_char_in_string)
{
	char data[] = "azertyuiop";

	cr_assert(strchr(data, 'w') == 0);
}

Test(ASM, strchr_with_empty_string)
{
	char data[] = "";

	cr_assert(strchr(data, 'a') == 0);
}

Test(ASM, strchr_with_doublon_in_string)
{
	char data[] = "aauzzzyeeerrrtttyyuuiiiaooppp";

	cr_assert(strchr(data, 'y') == (data + 6));
}
