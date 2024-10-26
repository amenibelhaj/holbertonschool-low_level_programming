#include <stdio.h>  /* Required for putchar */

 /**
 * main - Entry point of the program.
 *
 * Description: This function prints the alphabet in lowercase
 * and then in uppercase, followed by a new line.
 *
 * Return: Always returns 0 to indicate success.
 */

int main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	/* Print lowercase alphabet */
	for (int i = 0; i < 26; i++)
		putchar(lowercase[i]);

	/* Print uppercase alphabet */
	for (int i = 0; i < 26; i++)
		putchar(uppercase[i]);

	putchar('\n');  /* Print new line */

	return (0);
}
