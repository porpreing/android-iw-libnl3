Porting iw on android.

Using libnl-3 code: https://github.com/dschuermann/libnl-3-android

Using iw code: http://git.kernel.org/cgit/linux/kernel/git/jberg/iw.git

cd android\_toolchain

ndk-build

you will get iw binary at libs/\<arch\> directory.
The binary is compiled with static local libnl3, so it should be able to run on every Android devices.
