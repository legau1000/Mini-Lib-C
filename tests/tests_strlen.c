/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** bistro-matic
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

Test(my_strlen, little_string)
{
	cr_assert(strlen("Little") == 6);
}

Test(my_strlen, big_string)
{
	cr_assert(strlen("BIGSTRINGMAMENNE") == 16);
}

Test(my_strlen, null_string)
{
	cr_assert(strlen(NULL) == 0);
}

Test(my_strlen, empty_string)
{
	cr_assert(strlen("\0") == 0);
}