obj-m += hello_world_d-grossman.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

I'm doing this for hacktoberfest. Please ignore me. I am so sorry...
