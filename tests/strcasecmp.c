/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** strcasecmp
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, strcasecmp_basic)
{
	cr_assert(strcasecmp("salut", "SALUT") == 0);
}

Test(ASM, strcasecmp_with_spec_char)
{
	cr_assert(strcasecmp("$41ut", "$41UT") == 0);
}

Test(ASM, strcasecmp_with_pos_diff)
{
	cr_assert(strcasecmp("salut", "sal") > 0);
}

Test(ASM, strcasecmp_with_neg_diff)
{
	cr_assert(strcasecmp("sal", "salut") < 0);
}
