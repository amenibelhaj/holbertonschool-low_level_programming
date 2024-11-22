#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or an error code
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

    /* Check argument count */
if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

/* Get the operation function */
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}

 /* Handle division or modulo by 0 */
if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

    /* Perform the operation */
result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
