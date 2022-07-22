#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
//#include <sys/uio.h>
//#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define CHECK(X) ({int __val = (X); (__val == -1 ? \
                ({fprintf(stderr, "ERROR (" __FILE__ ":%d) -- %s\n",__LINE__,strerror(errno)); \
                exit(-1);-1;}) : __val); })


int main(int argc, char **argv)
{
    //open file
    
    int fd;    
    //CHECK(56);    //issue with macro!
    //fd = open(argv[1], O_RDONLY);
    

    if(fd == -1)
    {
        perror("open");
        //fprintf(stderr, "ERROR (" __FILE__ ":%d) -- %s\n",__LINE__,strerror(errno));
        //fprintf(stderr, "errno = %s\n" , strerror(errno));
        
        exit(-1);
    }



    //write file info
    char c;
    while (read(fd, &c, 1) > 0)
    {
        fputc(c, stdout);
    }

    close(fd);
}