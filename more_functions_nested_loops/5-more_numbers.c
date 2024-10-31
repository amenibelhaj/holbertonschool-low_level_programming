#include "main.h"

/** 
 * more_numbers - function that prints 10 times the numbers
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void) { // Remove the semicolon here
    int i, j; // Change the colon to a semicolon

    for (j = 0; j < 10; j++) {
        for (i = 0; i <= 14; i++) {
            if (i > 9) {
                _putchar((i / 10) + '0'); // Print the tens digit
            }
            _putchar((i % 10) + '0'); // Print the units digit
        }
        _putchar('\n'); // New line after each set of numbers
    }
}
