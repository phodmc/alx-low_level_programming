#include <stdio.h>

/* prototype */
void startup(void) __attribute__ ((constructor));

/**
* startup - runs before main()
*/

void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
