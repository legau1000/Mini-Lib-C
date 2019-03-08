/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_memmove(void *str1, const void *str2, size_t n);

void tests_memmove(int nb_good)
{
	char src[20] = "bonsoir PARIS!!!!!!";
	char dest[20] = "1111111111111111111";
	char src_s[20] = "bonsoir PARIS!!!!!!";
	char dest_s[20] = "1111111111111111111";

	printf("START MEMMOVE TESTS\n\n");
	my_memmove(dest, src, 10);
	memmove(dest_s, src_s, 10);
	if (strcmp(dest, dest_s) == 0) {
		nb_good++;
		printf("MEMMOVE First Tests STRING ===> OK\n");
	}
	my_memmove(src, dest, 0);
	memmove(src_s, dest_s, 0);
	if (strcmp(src, src_s) == 0) {
		nb_good++;
		printf("MEMMOVE Second Tests STRING ===> OK\n");
	}
	printf("On MEMMOVE: %d tests on 2 are OK!\n\n", nb_good);
    printf("END MEMMOVE TESTS\n\n");
}