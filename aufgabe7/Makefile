#
# Makefile
#
# SystemProgrammierung Aufgabe7 (POSIX)
# Daniel Rill
# 18.06.2021

CC=gcc
STD=c11
CFLAGS = -g -W -Wall  -std=$(STD) -pedantic
CPPCHECK = cppcheck --enable=warning,style --std=$(STD)
RM = rm -f

TARGETS= filecopy filesize


.PHONY: all clean cppcheck

all: $(TARGETS)

clean:
		$(RM) $(TARGETS)

#$(TARGETS) : $(TARGETS:=.o)
#		$(CC) $(CFLAGS) -o $@ $^	

		
cppcheck: $(TARGETS:=.c)
		$(CPPCHECK) $^
