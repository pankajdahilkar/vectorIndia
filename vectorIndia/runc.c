#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main(int argc,char **argv)
{
int i=0;
printf("Sequential running with system \n");
for(i=1;i<=argc;i++)
system(argv[i]);
exit(0);
}
