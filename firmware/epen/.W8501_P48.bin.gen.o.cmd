cmd_firmware/epen/W8501_P48.bin.gen.o := /usr/local/arm/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,firmware/epen/.W8501_P48.bin.gen.o.d  -nostdinc -isystem /usr/local/arm/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/miamo/android/kernel/miamOv/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-exynos/include -Iarch/arm/plat-s5p/include -Iarch/arm/plat-samsung/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2        -c -o firmware/epen/W8501_P48.bin.gen.o firmware/epen/W8501_P48.bin.gen.S

source_firmware/epen/W8501_P48.bin.gen.o := firmware/epen/W8501_P48.bin.gen.S

deps_firmware/epen/W8501_P48.bin.gen.o := \
  /home/miamo/android/kernel/miamOv/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/epen/W8501_P48.bin.gen.o: $(deps_firmware/epen/W8501_P48.bin.gen.o)

$(deps_firmware/epen/W8501_P48.bin.gen.o):
