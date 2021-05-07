TARGET = kernel.elf
OBJS = main.o graphics.o font.o

CXXFLAGS += -O2 -Wall -g --target=x86_64-elf -ffreestanding -mno-red-zone \
            -I$${HOME}/osbook/devenv/x86_64-elf/include/c++/v1 \
            -I$${HOME}/osbook/devenv/x86_64-elf/include \
            -I$${HOME}/osbook/devenv/x86_64-elf/include/freetype2 \
            -nostdlibinc \
            -D__ELF__ -D_LDB_EQ_DBL -D_GNU_SOURCE -D_POSIX_TIMERS \
            -fno-exceptions -fno-rtti -std=c++17
LDFLAGS  += --entry KernelMain -z norelro --image-base 0x100000 --static \
  -L$${HOME}/osbook/devenv/x86_64-elf/lib

.PHONY: all
all: $(TARGET)

.PHONY: clean
clean:
	rm -rf *.o

kernel.elf: $(OBJS) Makefile
	ld.lld $(LDFLAGS) -o kernel.elf $(OBJS)

%.o: %.cpp Makefile
	clang++ $(CPPFLAGS) $(CXXFLAGS) -c $<

