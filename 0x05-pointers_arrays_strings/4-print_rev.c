#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: the string.
 */
void print_rev(char *s)
{
	char *rev_s = strdup(s);  // make a copy of the string

	strrev(rev_s);  // reverse the copy using strrev
       	printf("%s\n", rev_s);  // print the reversed copy
       	free(rev_s);
}	
