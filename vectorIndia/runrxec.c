#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc , char ** argv)
{
int i=0,j;
printf("Running multiple process concurrently using exelp \n");
for(i=1;i<argc;i++)
{
j=fork();
if(j)
execlp(argv[i],argv[i],NULL);
}
}
