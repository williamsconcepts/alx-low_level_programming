 #include "main.h"

/**
* print_sign - print the sign of a number
* @n: an integer
* Return: 1 if n is greater than 0, 0 if the n is equal to 0,
* -1 if n is less than 0
*/
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar(43);
		return (1);
        }
        else if (n < 0)
        {
                _putchar(45);
                return (-1);
        }
        else
        {
                _putchar(48);
                return (0);
        }

}
