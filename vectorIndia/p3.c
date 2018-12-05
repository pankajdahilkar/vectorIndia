#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main()
{
printf("in process  P3  id :%d parent:%d\n",getpid(),getppid());
sleep(5);
printf("exiting P3\n");
exit(0);
}
