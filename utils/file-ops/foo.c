/* (C) Danny Jiang, 1997 - 2020.
 *
 *  foo utils to divid files into small and euqal size.
 *
 *  usage:
 *      modify the DIVID_SIZE.
 *
 *  input:
 *      source file name "ccc"
 *
 *  output:
 *      target files named after xa*, e.g. xaa, xab, xac, ... and so on.
 *
 *  limitation:
 *      don't exceed the max/min limits.
 *
 *  build&exec:
 *      gcc foo.c -o foo
 *      ./foo
 */

#include <stdio.h>
#include <stdlib.h>

#define DIVID_SIZE (8 * 1024)
int main(void)
{
	FILE* fptr;
    FILE* fptr_to;
    char fname_to[] = "xaa";
    int fsize;
    char* buffer;
    char* buffer_orig;
	
	fptr = fopen("ccc", "rb");
    fseek(fptr, 0, SEEK_END);
    fsize = ftell(fptr);
    printf("size : %ld\n", ftell(fptr));
    rewind(fptr);

    buffer = (char*) malloc (sizeof(char) * fsize);
    buffer_orig = buffer;
    fread(buffer, fsize, 1, fptr);
    for(;fsize > DIVID_SIZE; fsize -= DIVID_SIZE)
    {
        fptr_to = fopen(fname_to, "wb");
        fwrite(buffer, 1, DIVID_SIZE, fptr_to);
        fclose(fptr_to);
        buffer += DIVID_SIZE;
        fname_to[2]++;
    }
    if(fsize != 0)
    {
        fptr_to = fopen(fname_to, "wb");
        fwrite(buffer, 1, fsize, fptr_to);
        fclose(fptr_to);
    }
    buffer = buffer_orig;
    free(buffer);

    fclose(fptr);
	return 0;
}
