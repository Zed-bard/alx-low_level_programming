#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * findLargestChar - Finds the largest ASCII value in the username
 * @usrn: username
 * @len: length of the username
 *
 * Return: the largest ASCII value
 */
char findLargestChar(char *usrn, int len)
{
	char largest = usrn[0];

	for (int i = 1; i < len; i++)
	{
		if (usrn[i] > largest)
		{
			largest = usrn[i];
		}
	}

	return (largest);
}

/**
 * multiplyChars - Multiplies each character's ASCII value in the username
 * @usrn: username
 * @len: length of the username
 *
 * Return: the product of the multiplication
 */
int multiplyChars(char *usrn, int len)
{
	int result = 0;

	for (int i = 0; i < len; i++)
	{
		result += usrn[i] * usrn[i];
	}

	return result;
}

/**
 * generateRandomNumber - Generates a random number based on the length of the username
 * @usrn: username
 *
 * Return: the generated random number
 */
int generateRandomNumber(char *usrn)
{
	return rand() % (*usrn + 1);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	char keygen[7];
	int len = strlen(argv[1]);

	/* Part 1: Find the largest ASCII value in the username */
	keygen[0] = findLargestChar(argv[1], len);

	/* Part 2: Sum of ASCII values in the username */
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += argv[1][i];
	}
	keygen[1] = sum % 64;

	/* Part 3: Multiply each character's ASCII value in the username */
	int product = multiplyChars(argv[1], len);
	keygen[2] = (product ^ 85) % 64;

	/* Part 4: Find the biggest number using a different approach */
	keygen[3] = findLargestChar(argv[1], len);

	/* Part 5: Multiply each char of username */
	keygen[4] = multiplyChars(argv[1], len) % 64;

	/* Part 6: Generate a random number based on the length of the username */
	keygen[5] = generateRandomNumber(argv[1]) % 64;

	keygen[6] = '\0';

	printf("%s\n", keygen);

	return (0);
}

