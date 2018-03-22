/*
** EPITECH PROJECT, 2018
** ASM_minilibc_2017
** File description:
** test_strstr.c
*/
#include <dlfcn.h>
#include <stdlib.h>
#include <stdio.h>
#include <criterion/criterion.h>

static void *lib = NULL;
static char *(*my_strstr)(const char *haystack, const char *needle) = NULL;

static void setup(void)
{
	lib = dlopen("./libasm.so", RTLD_LAZY);
	my_strstr = dlsym(lib, "strstr");
}

static void teardown(void)
{
	dlclose(lib);
	lib = NULL;
	my_strstr = NULL;
}

Test(strstr, strstr1, .init = setup, .fini = teardown)
{
	char *test = "AZERTYUIOP";
	char *a = 0;
	char *b = 0;

	a = my_strstr(test, "FGHJ");
	b = strstr(test, "FGHJ");
	cr_assert_eq(a, b);
}
