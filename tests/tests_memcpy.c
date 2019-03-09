/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_memcpy(void *str1, const void *str2, size_t n);

void tests_memcpy(int nb_good)
{
    char src[20] = "bonsoir PARIS!!!!!!";
    char dest[20] = "1111111111111111111";
    char src_s[20] = "bonsoir PARIS!!!!!!";
    char dest_s[20] = "1111111111111111111";

    printf("START MEMCPY TESTS\n\n");
    my_memcpy(dest, src, 10);
    memcpy(dest_s, src_s, 10);
    if (strcmp(dest, dest_s) == 0) {
        nb_good++;
        printf("MEMCPY First Tests STRING ===> OK\n");
    }
    my_memcpy(src, dest, 0);
    memcpy(src_s, dest_s, 0);
    if (strcmp(src, src_s) == 0) {
        nb_good++;
        printf("MEMCPY Second Tests STRING ===> OK\n");
    }
    printf("On MEMCPY: %d tests on 2 are OK!\n\n", nb_good);
    printf("END MEMCPY TESTS\n\n");
}