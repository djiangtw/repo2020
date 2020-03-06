#include <stdlib.h>
#include <stdio.h>

int foo2(void)
{
    printf("this is %s\n", __FUNCTION__);
    return 0;
}
