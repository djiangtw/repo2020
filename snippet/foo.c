#include <stdio.h>
#include <stdlib.h>

void foo1(void)
{
    int c = 0x1234;
    void *vp = &c;
    printf("%.8x\n", *(int*)vp);
}

int main(int argc, char** argv)
{
    foo1();
    return 0;
}
