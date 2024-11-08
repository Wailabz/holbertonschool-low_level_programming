#include <stdio.h>
#include <stdlib.h>
/**
* main - adds two numbers
* @argc: variable
* @argv: array of string
* Return: sum of all digits
*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int n;
	int sum;
	char *s;

	sum = 0;
	n = 0;
	i = 1;
	while (i < argc)
	{
		s = argv[i];
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);
		sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
