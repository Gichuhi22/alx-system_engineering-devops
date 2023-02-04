#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

extern char **environ;

int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	int count = 0;

	while (environ[count])
	{
		printf("[%s] ::", environ[count]);
		count++;
	}
	
	char *val = getenv("USER");
	printf("\nCurrent value of environment variable USER is %s\n", val);

	if(setenv("USER", "Arora", 1))
	{
		printf("\n setenv() failed\n");
		return (1);
	}

	printf("\n Successfully Added a new value to existing environment variable user\n");

	val = getenv("USER");
	printf("\nNew value of environment variable USER is [%s]\n", val);

	while(1)
	{
		sleep(2);
	}
	return (0);
}
