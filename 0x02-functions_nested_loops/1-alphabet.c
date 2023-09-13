#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet followed by a newline.
*
* This function prints the lowercase alphabet from 'a' to 'z' followed by a newline character.
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
