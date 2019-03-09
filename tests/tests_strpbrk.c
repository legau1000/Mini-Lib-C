/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strpbrk(const char *s, const char *accept);

void tests_strpbrk(int nb_good)
{
	char src[20] = "bonsoir PARIS!!!!!!";
	char dest[20] = "1111111111111111111";
	char dest_s[27] = "bonsoir moi c'est florian";
	char src_s[4] = "moi";

	printf("START STRPBRK TESTS\n\n");
	if (my_strpbrk(dest, src) == NULL) {
		nb_good++;
		printf("STRPBRK no match STRING ===> OK\n");
	}
	if (my_strpbrk(dest_s, src_s) == strpbrk(dest_s, src_s)) {
		nb_good++;
		printf("STRPBRK match middle STRING ===> OK\n");
	}
	if (my_strpbrk(dest_s, src) == strpbrk(dest_s, src)) {
		nb_good++;
		printf("STRPBRK No match two STRING ===> OK\n");
	}
	printf("On STRPBRK: %d tests on 3 are OK!\n\n", nb_good);
    printf("END STRPBRK TESTS\n\n");
}