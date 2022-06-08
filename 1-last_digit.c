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
	int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5) {
		printf("Last digit of %d is %d and is greater than 5", n,m);
	}else if (n < 6 && != 0) {
		printf("Last digit of %d is %d and is less than 6 and not 0",n,m);
	}else
		printf("Last digit of %d is %d is 0 and is 0",n,m);
	return (0);
}

