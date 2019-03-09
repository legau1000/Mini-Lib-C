/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strcmp(char*, char*);

void tests_strcmp(int nb_good)
{
    printf("START STRCMP TESTS\n\n");
    if (my_strcmp("\0", "\0") == strcmp("\0", "\0")) {
        nb_good++;
        printf("STRCMP EMPTY STRING ===> OK\n");
    }
    if (my_strcmp("Little", "Little") == strcmp("Little", "Little")) {
        nb_good++;
        printf("STRCMP 'Little' Search 'Little' STRING ===> OK\n");
    }
    printf("On STRCMP: %d tests on 2 are OK!\n\n", nb_good);
    printf("END STRCMP TESTS\n\n");
}