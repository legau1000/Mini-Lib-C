/*
** EPITECH PROJECT, 2017
** Test Criterion
** File description:
** ASM
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strncmp(char*, char*, int);

void tests_strncmp(int nb_good)
{
    printf("START STRNCMP TESTS\n\n");
	if (my_strncmp("\0", "\0", 2) == strncmp("\0", "\0", 2)) {
		nb_good++;
		printf("STRNCMP EMPTY STRING ===> OK\n");
	}
	if (my_strncmp("Little", "Little", 4) == strncmp("Little", "Little", 4)) {
		nb_good++;
		printf("STRNCMP 'Little' Search 'Little' STRING ===> OK\n");
	}
	if (my_strncmp("BIGGGG", "BIGG", 3) == strncmp("BIGGGG", "BIGG", 3)) {
		nb_good++;
		printf("STRNCMP 'BIGGGG' Search 'BIGG' STRING ===> OK\n");
	}
	printf("On STRNCMP: %d tests on 2 are OK!\n\n", nb_good);
    printf("END STRNCMP TESTS\n\n");
}