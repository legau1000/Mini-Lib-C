/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_memset(void *ptr, int x, size_t n);

void tests_memset(int nb_good)
{
    char str_one[50] = "GeeksForGeeks is for programming geeks.";
    char str_two[50] = "GeeksForGeeks is for programming geeks.";

    printf("START MEMSET TESTS\n\n");
    my_memset(str_one + 13, '.', 8);
    memset(str_two + 13, '.', 8);
    if (strcmp(str_one, str_two) == 0) {
        nb_good++;
        printf("MEMSET First Change STRING ===> OK\n");
    }
    my_memset(str_one, 'O', 10);
    memset(str_two, 'O', 10);
    if (strcmp(str_one, str_two) == 0) {
        nb_good++;
        printf("MEMSET change with 'O' STRING ===> OK\n");
    }
    printf("On MEMSET: %d tests on 2 are OK!\n\n", nb_good);
    printf("END MEMSET TESTS\n\n");
}