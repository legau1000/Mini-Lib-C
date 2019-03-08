/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>

void tests_strlen(int);
void tests_strchr(int);
void tests_memset(int);
void tests_memcpy(int);
void tests_strcmp(int);
void tests_memmove(int);
void tests_strncmp(int);
void tests_strcasecmp(int);
void tests_rindex(int);

int main()
{
    tests_strlen(0);
    printf("-----------------------\n");
    tests_strchr(0);
    printf("-----------------------\n");
    tests_memset(0);
    printf("-----------------------\n");
    tests_memcpy(0);
    printf("-----------------------\n");
    tests_strcmp(0);
    printf("-----------------------\n");
    tests_memmove(0);
    printf("-----------------------\n");
    tests_strncmp(0);
    printf("-----------------------\n");
    tests_strcasecmp(0);
    printf("-----------------------\n");
    tests_rindex(0);
    printf("-----------------------\n");
}