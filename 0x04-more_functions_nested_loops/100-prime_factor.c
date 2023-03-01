#include <stdio.h>

/**
 * main - print prime
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 3, n = 612852475143;
	// The loop, why don't you have this instead
	 for (unsigned long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
        }
    }

// 	for (; i < 12057; i += 2)
// 	{
// 		while (n % i == 0 && n != i)
// 			n /= i;
// 	}
	printf("%lu\n", n);
	return (0);
}



