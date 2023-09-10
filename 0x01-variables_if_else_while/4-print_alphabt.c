#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 **/
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
if (lowercase != 'e' && lowercase != 'q') 
{
putchar(lowercase);
}
lowercase++;
}
while (uppercase <= 'Z')
{
if (uppercase != 'E' && uppercase != 'Q') {
putchar(uppercase);
}
uppercase++;
}
putchar('\n');

return (0);
}
