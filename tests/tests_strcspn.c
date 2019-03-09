/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strcspn(const char *s, const char *accept);

void tests_strcspn(int nb_good)
{
    char src[20] = "bonsoir PARIS!!!!!!";
    char dest[20] = "1111111111111111111";
    char dest_s[27] = "bonsoir moi c'est florian";
    char src_s[4] = "moi";

    printf("START STRCSPN TESTS\n\n");
    if (my_strcspn(dest, src) == strcspn(dest, src)) {
        nb_good++;
        printf("STRCSPN no match STRING ===> OK\n");
    }
    if (my_strcspn(dest_s, src_s) == strcspn(dest_s, src_s)) {
        nb_good++;
        printf("STRCSPN match middle STRING ===> OK\n");
    }
    if (my_strcspn(dest_s, src) == strcspn(dest_s, src)) {
        nb_good++;
        printf("STRCSPN No match two STRING ===> OK\n");
    }
    printf("On STRCSPN: %d tests on 3 are OK!\n\n", nb_good);
    printf("END STRCSPN TESTS\n\n");
}