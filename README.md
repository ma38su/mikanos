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
$ cd mikanos/kernel
$ source ~/osbook/devenv/buildenv.sh
$ make
```

# How to build Loader

```sh
$ cd ~/edk2
$ source edksetup.sh
$ build
```

# How to Run

```sh
$ ~/osbook/devenv/run_qemu.sh ~/edk2/Build/MikanLoaderX64/DEBUG_CLANG38/X64/Loader.efi ~/workspace/mikanos/kernel/kernel.elf
```
