#include<stdio.h>
/**
*main:Entry point
*description : prints the alphabet in lowercase
*Return: 0
*/
int main(void)
{
int i;

for (i = 0; i < 26; i++)
{
	putchar('a' + i);
}

	putchar('\n');

return (0);
}
