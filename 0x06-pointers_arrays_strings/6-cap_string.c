#include "main.h"

/**
 * cap_string - Capitalize all words in a string.
 * @entry: The input string.
 *
 * Return: The modified string.
 */
char *cap_string(char *entry)
{
	int conversion = 32; // Initialize conversion to 32 outside the loop
	int index, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'a' && entry[index] <= 'z') // Compare with 'a' and 'z'
		{
			entry[index] = entry[index] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
