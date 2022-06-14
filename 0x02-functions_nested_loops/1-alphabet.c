#include <stdio.h>

int main (void)
{
	print_alphabet();
	return (0);
}
void print_alphabet()
{
	char alphabet;
	for(alphabet= 'a'; alphabet<='z'; alphabet++)
	      _putchar(alphabet);
	_putchar('\n');	
}
