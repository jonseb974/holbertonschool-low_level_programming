/**
 *reverse_array - print reverses contain of an arrayof integers
 *@a: list of inteher
 *@i; interger
 *@n: list of interger
 *Retun: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp = 0;
	int i = 0;
	int j = 0;
	int *start;
	int *end;

	start = a;
	end = a;
	n--;

	while (i < n)
	{
		i++;
	}

	while (j <= i)
	{
		tmp = *(start + j);
		*(start + j) = *(end + i);
		*(end + i) = tmp;
		j++;
		i--;
	}
}
