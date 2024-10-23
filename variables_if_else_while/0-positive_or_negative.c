#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
 /* Print the number */
    printf("The number is: %d\n", n);

    /* Check if the number is positive, negative, or zero */
    if (n > 0) {
        printf("The number is greater than 0: is positive\n");
    } else if (n < 0) {
        printf("The number is less than 0: is negative\n");
    } else {
        printf("The number is 0: is zero\n");
    }

    return (0);
}
