/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strcasecmp(char*, char*);

void tests_strcasecmp(int nb_good)
{
    printf("START STRCASECMP TESTS\n\n");
    if (my_strcasecmp("\0", "\0") == strcasecmp("\0", "\0")) {
        nb_good++;
        printf("STRCASECMP EMPTY STRING ===> OK\n");
    }
    if (my_strcasecmp("Little", "Little") == strcasecmp("Little", "Little")) {
        nb_good++;
        printf("STRCASECMP 'Little' Search 'Little' STRING ===> OK\n");
    }
    printf("On STRCASECMP: %d tests on 2 are OK!\n\n", nb_good);
    printf("END STRCASECMP TESTS\n\n");
}