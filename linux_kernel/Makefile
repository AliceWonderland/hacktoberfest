<h1>obj-m += hello_world_d-grossman.o</h1>
<p>aku sayang ibu</p>

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
