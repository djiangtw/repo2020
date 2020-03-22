# Interesting Projects

- raytracing
    - url: https://github.com/embedded2016/raytracing
    - a small raytracing project and analysis
    - ref: http://wiki.csie.ncku.edu.tw/embedded/2016q1h2
        - merge sort
        - c + oop
        - 2016q1h3, http server.
            - use `ab` util for benchmark.
        - tcpip stack

- Linuxkl CSIE@NCKU
    - url: http://wiki.csie.ncku.edu.tw/linux/schedule
    - url: https://hackmd.io/@sysprog/linux-kernel-internal
    - an interesting and practical linux kernel course.
    - CS:APP
        - BUY one.
        - url: https://hackmd.io/@sysprog/CSAPP/
        - video 1: https://www.bilibili.com/video/av24540152/
    - derived subjects
        - C
        - eBPF, extended Berkeley Packet Filter.
            - video: https://www.youtube.com/watch?v=UmCnh6mELwA
            - `TODO` watch it again and DOIT.
         - MM
            - video: https://www.youtube.com/watch?v=kY3g2r03erk
            - buddy system
            - slab/slub/slob
         - process
         - sync
         - interrupt
         - device driver/modules

- C/CPP ref and discussion
    - url: https://en.cppreference.com/w/
    - behind the C programming
        - url: https://hackmd.io/@sysprog/c-prog/%2F%40sysprog%2Fc-programming

- QEMU
    - url: https://wiki.qemu.org/Main_Page
    - MIPS
    - RISCV

- CPU Arch
    - topics
        - dual-issue
        - out-of-order
        - multitasking, multithreading , multiprocessing
            - parallelism, concurrency
- basic algorithm and data structure
    - tree
    - graph
        - coloring problem

# Tutorial/Training Videos

- .GUTS @ Youtube. Jserv and his partners.
    - url: https://www.youtube.com/c/GUTS4Tech
    - watched:
        - https://www.youtube.com/watch?v=m1RmfOfSwno
        - https://www.youtube.com/watch?v=9VlOpKWdIVU

- Taiwan Linux Kernel Hackers @ Youtube.
    - url: https://www.youtube.com/channel/UCzv1VG_o1MoQCA1G0uixMaA/videos

# Misc.
- LaTex alternative for github. +-use.
    - <img src="https://render.githubusercontent.com/render/math?math=e^{i +\pi} =x+1">
    - <img src="https://render.githubusercontent.com/render/math?math=f(n)=n^5 %2B 4n^2 %2B 2">
    
# Thoughts

Today, we have domain-specific areas. We probably want a compiler. we probably want libraries since the people who build the machines know best how to use them. We need to codesign from the physics all the way up to the applications, which is hard.

- ISA, a contract between the hardware and softwre.
- Microarchitecture, a way to implement the hardware.
- Compiler, a translation which might work efficiently and/or clearly.
- Libraries, packed instructions for use.
- Operation System, a way makes the hardware work regularly for purposes.
