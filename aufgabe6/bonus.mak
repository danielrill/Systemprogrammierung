#
# Makefile
# Aufgabe6
#

#CXX = g++
#CXXFLAGS = -g -c -W -Wall -std=$(STD) -pedantic -fpic


RM = rm -f

LDBIN =  Makefile \
		bin \
		lib 
	
TAR = tar cvzf 
FORMAT = tar.gz
LIB = aufgabe6

.PHONY: all clean 

all: $(LIB).$(FORMAT)

$(LIB).$(FORMAT):  $(LDBIN)
		$(TAR)  $@ $^


clean:
		$(RM) $(LIB).$(FORMAT)
		

