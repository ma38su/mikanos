# mikanos
MikanOS: An Educational Operating System

**This repos is only for my practice.**

# Files

- MikanLoaderPkg
    - The MikanOS loader as a UEFI Application
- kernel
    - The MikanOS Kernel

# How to build Loader

```sh
$ cd ~/edk2
$ source edksetup.sh
$ build
```

# How to build kernel and Run

```sh
$ source ~/osbook/devenv/buildenv.sh
$ cd mikanos
$ APPS_DIR=apps RESOURCE_DIR=resource ./build.sh run
```

