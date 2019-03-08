/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strlen(char*);

void tests_strlen(int nb_good)
{
    printf("START STRLEN TESTS\n\n");
	if (my_strlen(NULL) == 0) {
		nb_good++;
		printf("STRLEN NULL STRING ===> OK\n");
	}
	if (my_strlen("\0") == strlen("\0")) {
		nb_good++;
		printf("STRLEN EMPTY STRING ===> OK\n");
	}
	if (my_strlen("Little") == strlen("Little")) {
		nb_good++;
		printf("STRLEN LITTLE STRING ===> OK\n");
	}
	if (my_strlen("BIGSTRINGMAMENNE") == strlen("BIGSTRINGMAMENNE")) {
		nb_good++;
		printf("STRLEN BIG STRING ===> OK\n");
	}
	printf("On STRLEN: %d tests on 4 are OK!\n\n", nb_good);
    printf("END STRLEN TESTS\n\n");
}