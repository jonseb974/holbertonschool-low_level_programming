#include <stdio.h>
#include <stdlib.h>                                                                                               
#include <time.h>                                                                                                                                        
/**                                                                                                                
 * main -program that prints the alphabet in lowercase                                               
* and uppercase with new lines
*Return:0
*/

int main()
{
	char ch = 97;
	while (ch <= 122)
	{
		putchar(ch);
		ch++;
		if (ch == 101 || ch == 113)
			ch++;
	}
	putchar('\n');
	return (0);
}
