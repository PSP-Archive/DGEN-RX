////////////////////////////////////////////////////////
/// psp_std.h
////////////////////////////////////////////////////////
#ifndef _PSP_STD_H
#define _PSP_STD_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
#define PSP_O_RDONLY	0x0001 
#define PSP_O_WRONLY	0x0002 
//#define PSP_O_RDWR	0x0003 
//#define PSP_O_NBLOCK	0x0010 
#define PSP_O_APPEND	0x0100 
#define PSP_O_CREAT		0x0200 
#define PSP_O_TRUNC		0x0400 
#define PSP_O_NOWAIT	0x8000 

////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
////////////////////////////////////////////////////////
extern int  sceIoOpen  (const char* file, int mode, int unknown);
extern long long  sceIoLseek(int fd, long long offset, int whence); //long long  unsigned int
extern int  sceIoClose(int fd); 
extern int  sceIoRead(int fd, void *data, unsigned int size); 
extern int  sceIoWrite (int fd, const void *data, unsigned int size); // 
////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
////////////////////////////////////////////////////////
#endif //_PSP_STD_H
////////////////////////////////////////////////////////
