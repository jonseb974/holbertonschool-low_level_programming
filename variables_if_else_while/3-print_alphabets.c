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

while (ch >= 'a' || ch <= 'z')
{
	putchar(ch);
	ch ++;
} while (ch >= 'A' || ch <= 'Z')
{
	putchar(ch);
	ch++;
} 
	putchar('\n');
return (0);
}   
