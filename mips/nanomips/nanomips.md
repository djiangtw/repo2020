#Debugging using GDB and QEMU
- setup enbironment
```
nanomips-elf-gcc -g hello.c -o hello.elf -Tuhi32.ld
qemu-system-nanomips -semihosting -nographic -gdb tcp::1111 -S -kernel hello.elf
nanomips-elf-gdb --eval-command="target remote:1111" hello.elf
    
```
- GDB log
```
(gdb) break main
Breakpoint 1 at 0x80200528: file hello.c, line 13.
(gdb) continue
Continuing.
Breakpoint 1, main () at hello.c:13
13 printf ("Hello world!\n");
(gdb) next
14 printf ("%d\n", f(25));
(gdb) step
f (a=25) at hello.c:5
5 int i, j = 0;
(gdb) next
6 for (i = 1 ; i < a ; i++)
(gdb) step
7 j += i;
(gdb) next
6 for (i = 1 ; i < a ; i++)
(gdb) finish
Run till exit from #0 f (a=25) at hello.c:6
0x80200534 in main () at hello.c:14
14 printf ("%d\n", f (25));
Value returned is $1 = 300
(gdb) next
15 return 0;
(gdb) continue
Continuing.
Remote connection closed
Qemu finished and emulated program.
```
- Source
```
#include <stdio.h>
int f (int a)
{
int i, j = 0;
for (i = 1 ; i < a ; i++)
j += i;
return j;
}
int main()
{
printf ("Hello world!\n");
printf ("%d\n", f (25));
return 0;
}
```
