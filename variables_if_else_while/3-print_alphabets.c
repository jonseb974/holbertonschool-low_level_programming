#include <stdio.h>      
#include <stdlib.h>                                                                                               
#include <time.h>                                                                                                 
/**                                                                                                               
* main -program that prints the alphabet in lowercase
* and uppercase, followed by new line.                                                            
* Return: 0                                                                                                       */                                                                                                               

int main(void)                                                                                                   

 {
char ch;

while (ch >= 65 || ch <= 90)
{
	putchar(ch);
	ch ++;
} while (ch >= 97 || ch <= 122)
{
	putchar(ch);
	ch++;
} 
	putchar('\n');
return (0);
}   
