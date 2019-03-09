/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strstr(const char *haystack, const char *needle);

void tests_strstr(int nb_good)
{
    char src[20] = "bonsoir PARIS!!!!!!";
    char dest[20] = "1111111111111111111";
    char dest_s[27] = "bonsoir moi c'est florian";
    char src_s[4] = "moi";

    printf("START STRSTR TESTS\n\n");
    if (my_strstr(dest, src) == NULL) {
        nb_good++;
        printf("STRSTR no match STRING ===> OK\n");
    }
    if (my_strstr(dest_s, src_s) == strstr(dest_s, src_s)) {
        nb_good++;
        printf("STRSTR match middle STRING ===> OK\n");
    }
    printf("On STRSTR: %d tests on 2 are OK!\n\n", nb_good);
    printf("END STRSTR TESTS\n\n");
}