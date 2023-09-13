#include "main.h"
/* Prototype for the _putchar function
 */
int _putchar(char c);
/* Function to print the alphabet 10 times in lowercase 
*/
void print_alphabet_x10(void)
{
char letter = 'a';
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
 _putchar(letter);
letter++;
}
_putchar('\n');
letter = 'a';
}
}
