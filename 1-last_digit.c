#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
 * *main - random number to the variable n each time it is executed
 * *if the last digit of n is greater than 5: 
 * *the string and is greater than 5
 * *if the last digit of n is 0: the string and is 0
 * *if the last digit of n is less than 6 and not 0: the string and 
 * *is less than 6 and not 0 followed by a new line
 * *return:0
 * */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5) {
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if (n < 6 && n != 0) {
		printf("Last digit of %d and is less than 6 and not 0\n");
	}else
		printf("Last digit of %d is 0 and is 0\n");
	return (0);
}
