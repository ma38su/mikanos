# mikanos
MikanOS: An Educational Operating System

**This repos is only for my practice.**

# Files

- MikanLoaderPkg
    - The MikanOS loader as a UEFI Application
- kernel
    - The MikanOS Kernel

# How to build kernel

```sh
$ clang++ $CPPFLAGS -O2 --target=x86_64-elf -fno-exceptions -ffreestand
ing -c main.cpp
$ ld.lld $LDFLAGS --entry KernelMain -z norelro --image-base 0x100000 -
-static -o kernel.elf main.o
```

# How to build kernel

```sh
$ cd ~/edk2
$ build
```

# How to Run

```sh
$ ~/osbook/devenv/run_qemu.sh ~/edk2/Build/MikanLoaderX64/DEBUG_CLANG38/X64/Loader.efi ~/workspace/mikanos/kernel/kernel.elf
```
