#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
 
int main() {
    int number;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check the number and print the appropriate message
    if (number > 0) {
        printf("%d is positive\n", number);
    } else if (number == 0) {
        printf("%d is zero\n", number);
    } else {
        printf("%d is negative\n", number);
    }

    return 0;
}
