#include <stdio.h>      
#include <stdlib.h>                                                                                               
#include <time.h>                                                                                                 
/**                                                                                                               
* main -program that prints the alphabet in lowercase
* and uppercase, followed by new line.                                                            
* Return: 0                                                                                                       */                                                                                                               

int main(void)                                                                                                   

 {
	 char minus = 65;
	 char maj = 97;
	 
	 while (maj <= 122)
	 {
		 putchar(maj);
		 maj++;
	 } while (minus <= 90)
	 {
	 	 putchar(minus);
		 minus++;
	 } 
	 putchar('\n');
	 return (0);
}   
