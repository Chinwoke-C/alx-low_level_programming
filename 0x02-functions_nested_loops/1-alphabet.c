#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet followed by a newline.
*
* This function prints the lowercase alphabet.
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
