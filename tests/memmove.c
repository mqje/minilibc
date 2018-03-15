/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** memmove.c
*/

#include <string.h>
#include <criterion/criterion.h>

Test(ASM, memmove_basic)
{
	size_t size = 20;
	char data1[size];
	char data2[size];

	memset(data1, 0, size);
	data1[9] = 1;
	memset(data2, 0, size);
	memset(data2, 1, 10);
	memmove(data2, data2 + 10, 9);
        for (int i = 0; i < size; i++) {
		cr_assert(data1[i] == data2[i]);
	}
}

Test(ASM, memmove_overlap1)
{
	size_t size = 20;
	char data1[size];
	char data2[size];

	memset(data1, 0, size);
        memset(data1, 1, 10);
	memset(data2, 1, size);
	memset(data2 + 10, 0, 5);
        memmove(data1 + 15, data1 + 5, 5);
        for (int i = 0; i < size; i++) {
		cr_assert(data1[i] == data2[i]);
        }
}

Test(ASM, memmove_overlap2)
{
	size_t size = 20;
	char data1[size];
	char data2[size];

	memset(data1, 0, size);
        memset(data1, 1, 15);
        memset(data2, 0, size);
        memset(data2, 1, 5);
        memset(data2 + 10, 1, 5);
        memmove(data1 + 5, data1 + 15, 5);
	for (int i = 0; i < size; i++) {
		cr_assert(data1[i] == data2[i]);
	}
}
