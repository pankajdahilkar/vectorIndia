/* runnig commands with argument from command line using system */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

main(int argc,char **argv) 
{
	int i=0;
	char cmd[50]="";
	for(i=1;i<argc;i++)
	{
		strcat(cmd,argv[i]);
		strcat(cmd," ");
	}
	system(cmd);
	exit(0);


}
