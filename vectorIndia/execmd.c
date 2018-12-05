/* Running command with argument using exec */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

main(int argc,char **argv) 
{

execvp(argv[1],argv+1);
exit(0);

}
