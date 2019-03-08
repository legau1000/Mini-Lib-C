/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *my_rindex(char*, int);

void tests_rindex(int nb_good)
{
	char *str = "1234567890AZERTYUIedmploGFEZQSfefIKIYTRDJtfhutrdjnFFGU";

    printf("START RINDEX TESTS\n\n");
	if (my_rindex(str, 0) == rindex(str, 0)) {
		nb_good++;
		printf("RINDEX search '0' STRING ===> OK\n");
	}
	if (my_rindex(str, 'U') == rindex(str, 'U')) {
		nb_good++;
		printf("RINDEX Search 'U' ON str STRING ===> OK\n");
	}
	if (my_rindex(str, 'z') == rindex(str, 'z')) {
		nb_good++;
		printf("RINDEX Search not on str STRING ===> OK\n");
	}
	printf("On RINDEX: %d tests on 2 are OK!\n\n", nb_good);
    printf("END RINDEX TESTS\n\n");
}