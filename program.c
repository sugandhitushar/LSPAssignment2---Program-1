#include"program.h"

int main(int argc, char *argv[])
{
	printf("Parent:: pid=%d\n",getpid());
	if(fork() == 0)
	{
		printf("Child:: Created\n");
		printf("Child:: pid=%d\n",getpid());
		printf("Child:: Before sleep\n");
		sleep(5);
		printf("Child:: sleep completed\n");
		printf("Child:: Terminating\n");
	}
	else
	{
		printf("Parent:: Let's wait for child process to complete\n");
		pid = wait(&status);
		printf("Parent:: Process: %ld terminated with status: %d\n",pid,status);
		printf("Parent:: Terminating\n");
	}
}

