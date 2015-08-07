obj-m :=rako.o

KDIR  :=/root/ver_3.18/linux
PWD   :=$(shell pwd)
ARCH   =ARCH=arm
CROSS_COMPILE =CROSS_COMPILE=arm-linux-gnueabi-
MAKEARCH = $(MAKE) $(ARCH) $(CROSS_COMPILE)

default:
	$(MAKEARCH) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
	$(MAKEARCH) -C $(KDIR) SUBDIRS=$(PWD) clean
