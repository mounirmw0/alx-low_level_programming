/**
* File: 5-printf.c
* Auth : Mounir sabbar
*/
#include <stdio.h>
/**
 * main - Prints "with proper grammar, but the outcome is
 *                a piece of art," followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of a int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

return (0);
}
