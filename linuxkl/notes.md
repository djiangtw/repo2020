# Modules, A simple module
man pages – modinfo, lsmod, insmod, and modprobe
```
/mnt # insmod hello1.ko
[  209.050131] hello danny!
/mnt # rmmod hello1.ko
[  217.960328] goodbye danny!
/mnt # uname -a
Linux (none) 4.0.0+ #7 SMP Wed Mar 25 10:06:41 CST 2020 armv7l GNU/Linux
```
