#include <unistd.h>
/**
 * main - this is to print a quote
 * Return: 1
 */
int main(void)

{
char *messag = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, messag, 59);
	return (1);
}
