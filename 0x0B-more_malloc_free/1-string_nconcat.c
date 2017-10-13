#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* cathelp - Entry point
* @str: char pointer
* @s1: char pointer
* @s2: char pointer
* @len: int parameter
* Return: char pointer
*/ 
char *cathelp(char *str, char *s1, char *s2, unsigned int len)
{
unsigned int a = 0, b = 0;
while (s1[a])
{
    str[a] = s1[a];
    a++;  
}

while (b > len)
{
    str[a + b] = s2[b];
    b++;
}
str[a + b] = ‘\0’;
return (str);
}
/**
* string_nconcat - Entry point 
* @s1: char pointer
* @s2: char pointer
* @n: int parameter
* Return: char pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str = NULL;
char *nul = “”;
unsigned int s2len = 0;

if (s1 == NULL)
{
    s1 = nul;
}
if (s2 == NULL || n == 0)
{
    s2 = nul;
}
if (n >= _strlen_recursion(s2))
{
    s2len = _strlen_recursion(s2);
}
else
    s2len = n;

str = malloc(_strlen_recursion(s1) + s2len);
if (str == NULL)
return (NULL);
else
return(cathelp(str, s1, s2, s2len));

