#include <stdio.h>
#include <unistd.h>

/**
 * main - execve
 *
 * Return: Always 0;
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	char *execve;
	char *prompt = "[shell]";

	printf("execve\n");
	return (0);
}
