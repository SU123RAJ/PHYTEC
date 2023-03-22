#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<errno.h>

int main()
{
        int fp;
        fp=open("WORLD.txt",O_RDONLY);
        if(fp == -1)
        {
               perror("error only");
        }
        else
        {
                printf("located successfully");
        }


}

