BASEINC ?= /home/djiang/git/runninglinuxkernel_4.0

hello1-objs := hello1_.o
obj-m := hello1.o

all:
	$(MAKE) -C $(BASEINC) M=$(PWD) modules;

clean:
	$(MAKE) -C $(BASEINC) SUBDIRS=$(PWD) clean;
	rm -f *.ko
