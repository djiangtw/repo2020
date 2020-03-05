#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    printf("argc: %d\n", argc);
    while(argc--)
    {
        printf("arg[%d]: %s\n", argc, argv[argc]);
    }
    return 0;
}
