/*
 * filecopy.h
 * POSIX Aufgabe7
 *
 * Daniel Rill
 *
 */


#ifndef FILESIZE_H
#define FILESIZE_H

 
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <locale.h>
#include <stdlib.h>


void fstat_filesize(const char *filename);

#endif 
