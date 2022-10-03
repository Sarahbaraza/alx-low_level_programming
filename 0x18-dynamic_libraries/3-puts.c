#include "main.h"
#include <string.h>
/**
 * _puts - puts a string
 *
 * @str: string to print
 */
void _puts(char *str)
{
int len, i;
len = strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
