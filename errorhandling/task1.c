#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
        int fd;
        fd=open("hello.txt",O_RDONLY);
        if(fd == -1)
        {
                printf("NO SUCH file");

        }
        else
        {
                printf("located successfully");
        }


}

