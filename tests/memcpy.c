/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** memcpy.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, memcpy_basic)
{
	char data1[] = "azertyuiop";
	char data2[10];

	memcpy(data2, data1, 10);
	for (int i = 0; i < 10; i++) {
		cr_assert(data1[i] == data2[i]);
	}
}

Test(ASM, memcpy_half_str)
{
	char data1[] = "azertyuiop";
	char data2[10];

	memcpy(data2, data1, 5);
	for (int i = 0; i < 5; i++) {
		cr_assert(data1[i] == data2[i]);
	}
}

Test(ASM, memcpy_with_size_1)
{
	char data1[] = "azertyuiop";
	char data2[10];

	memcpy(data2, data1, 1);
	cr_assert(data1[0] == data2[0]);
}
