INFO
----

OpenCV helloworld application for Toradex Apalis i.MX6

BUILD
-----

source /opt/oecore-x86_64/environment-setup-armv7at2hf-neon-angstrom-linux-gnueabi 
export ROOTFS_DIR=/home/andre/bsps/toradex-yocto-bsp/deploy/images/apalis-imx6/Apalis_iMX6_LinuxImageV2.7/rootfs/
make

RUN
---

1 - copy the binary and data/ to the target rootfs

2 - if using an Angstrom image:
	 double click on the application if using the GUI

3 - running from a UART console:
	export DISPLAY=:0
	./hellworld

CONTACT
-------

www.engcore.com
	
	
