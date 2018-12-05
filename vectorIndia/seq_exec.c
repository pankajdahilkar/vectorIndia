#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(int argc,char **argv)
{
	int i,pid;
	for(i=1;i<argc;i++)
	{

		pid = fork();
		if(pid>0)
		{int status;
			waitpid(pid,&status,0);
		}

		else
		{
			execlp(argv[i],argv[i],NULL);

		}
	}

}
