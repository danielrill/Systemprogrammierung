/*
 * filesize.h
 * POSIX Aufgabe7
 *
 * Daniel Rill
 *
 */

#define _POSIX_C_SOURCE 1

#ifndef FILESIZE_H
#define FILESIZE_H

 
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <locale.h>
#include <stdlib.h>


void stat_filesize(const char *filename);

void file_read(int fd);

#endif 
