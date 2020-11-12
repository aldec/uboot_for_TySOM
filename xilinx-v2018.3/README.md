# uboot_for_TySOM
## How to build

1. Source settings from Xilinx SDK
```
  . /path/to/SDK/version/settings64.sh
```

2. Set architecture
```
  export ARCH=arm
```

3. Add a support for Aldec TySOM boards to u-boot-xlnx repo, copy files or apply the patch
```
  git clone https://github.com/Xilinx/u-boot-xlnx.git
  cd u-boot-xlnx
  git checkout xilinx-v2018.3
```
3.1 Copy files
```
  cp -rfv src/* /path/to/u-boot-xlnx
```
3.2 Apply the patch
```
  git apply TySOM.patch
```

4. Set cross compiler
4.1 TySOM-1/TySOM-2/TySOM-2A
```
	export CROSS_COMPILE=arm-linux-gnueabihf-
```
4.2 TySOM-3/TySOM-3A
```
	export CROSS_COMPILE=aarch64-linux-gnu-
```

5 choose one of configuration
```
	make zynq_tysom_1_defconfig
	make zynq_tysom_2_defconfig
	make zynqmp_tysom_3_defconfig
	make zynqmp_tysom_3a_defconfig
```

6. build
```
	make
```
