#ifndef _DEPEND_H
#define _DEPEND_H

#if defined(SOLARIS)
#define _XOPEN_SOURCE	500
#define CMSG_LEN(X) _CMSG_DATA_ALIGN(sizeof(struct cmsghdr)+(x))
#elif !defined(BSD)
#define _XOPEN_SOURCE 600
#endif

#include<sys/types.h>
#include<sys/stat.h>
#include<sys/termios.h>
#ifndef TIOCGWINSZ
#include<sys/ioctl.h>
#endif

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<string.h>
#include<unistd.h>
#include<signal.h>

#define MAX_LINE 4096

/*
*Default file acess permissions for new files.
*/
#define FILE_MODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH)

/*
*Default permissions for new directories.
*/
#define DIR_MODE (FILE_MODE|S_IXUSR|S_IXGRP|S_IXOTH)

/*
*Prototypes for our own functions.
*/
void pr_mask(const char *);



#endif
