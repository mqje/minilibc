/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** memset.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, memset_basic)
{
	char data[50];

	memset(data, 0, 50);
	for (int i = 0; i < 50; i++) {
		cr_assert(data[i] == 0);
	}
}

Test(ASM, memset_with_char)
{
	char data[50];

	memset(data, 'a', 50);
	for (int i = 0; i < 50; i++) {
		cr_assert(data[i] == 'a');
	}
}
