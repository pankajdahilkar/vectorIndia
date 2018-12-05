#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main(int argc,char **argv)
{
int i=0;
char cmd[50]="";
printf("concurently  running with system \n");
for(i=1;i<argc;i++)
{
strcpy(cmd,argv[i]);
strcat(cmd ," &");
system(cmd);
strcpy(cmd,"");
}

printf("\n exiting parent process \n");
exit(0);
}
