#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<errno.h>
//#include<stdlib.h>
#include<string.h>

int main()
{
        int fp;
        fp=open("WORLD.txt",O_RDONLY);
        if(fp == -1)
        {
		printf("error no is %d\n",errno);
               perror("error only\n");
	       printf("error %s\n",strerror(errno));
        }
        else
        {
                printf("located successfully");
        }
}



