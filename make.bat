rem Run this from a command prompt to setup your ps2dev settings
set PS2DEV=D:\PSPSDK\0.10.0
set PATH=%PS2DEV%\bin\;%PS2DEV%\psp\bin\;%PATH%;
del *.o
del gbcore\*.o
del mdcore\*.o
del pcecore\*.o
del pce\*.o
del psp\*.o
del *.out
del *.outp
del *.elf
del eboot.pbp
make.exe -f makefile
del *.o
del gbcore\*.o
del mdcore\*.o
del pcecore\*.o
del pce\*.o
del psp\*.o
pause
