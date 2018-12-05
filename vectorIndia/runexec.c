#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char **argv)
{
	int i=1,j;
	printf("Sequential running with exce\n");
	for(i=1;i<=argc;i++)
{
	j=fork();
	if(j>0)execlp(argv[i],argv[i],NULL);
	else 
	{
		execlp(argv[i+1],argv[i+1],NULL);

	}
}
	exit(0);
}
