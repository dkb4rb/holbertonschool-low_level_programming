#include <stdio.h>

void Func(void) __attribute__((constructor));

/**
 * Func - Prints a string before the
 *        main function is executed.
 */

void Func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
