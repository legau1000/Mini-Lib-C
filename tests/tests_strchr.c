/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_strchr(const char *s, int c);

static int more_test()
{
	int nb_good = 0;

	if (my_strchr("BIGS", 'c') == strchr("BIGS", 'c')) {
		nb_good++;
		printf("STRCHR 'BIGS' Search 'c' STRING ===> OK\n");
	}
	if (my_strchr("BIGS", 0) == strchr("BIGS", 0)) {
		nb_good++;
		printf("STRCHR 'BIGS' Search 0 STRING ===> OK\n");
	}
	return (nb_good);
}

void tests_strchr(int nb_good)
{
    printf("START STRCHR TESTS\n\n");
	if (my_strchr(NULL, 'c') == 0) {
		nb_good++;
		printf("STRCHR NULL FIRST STRING ===> OK\n");
	}
	if (my_strchr("\0", '\0') == strchr("\0", '\0')) {
		nb_good++;
		printf("STRCHR EMPTY STRING ===> OK\n");
	}
	if (my_strchr("Little", 'l') == strchr("Little", 'l')) {
		nb_good++;
		printf("STRCHR 'Little' Search 'l' STRING ===> OK\n");
	}
	if (my_strchr("BIGS", 'S') == strchr("BIGS", 'S')) {
		nb_good++;
		printf("STRCHR 'BIGS' Search 'S' STRING ===> OK\n");
	}
	printf("On STRCHR: %d tests on 6 are OK!\n\n", nb_good + more_test());
    printf("END STRCHR TESTS\n\n");
}