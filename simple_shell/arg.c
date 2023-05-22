#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * main - arg
 * @ac: arguments c
 * @av: arguments v
 * Return: Always 0;
 */
int main(int ac, char **av[])
{
	printf("ac %d\n", ac);
	for (int i = 0; av[i]; i++)
		printf("av[%d] char %s\n", i, "av[%d] char **av[i]");
	return (0);
}
