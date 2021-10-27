#
# Makefile
# Aufgabe6
# Daniel Rill
# 18.06.2021

CXX = g++
CXXFLAGS = -g -c -W -Wall -Weffc++ -Wold-style-cast -std=$(STD) -pedantic -fpic
CPPFLAGS = -I$(LDPATH)
LDFLAGS = -L$(LDPATH)
STD = c++11
RM = rm -f
LDPATH=../lib/

LIBNAME=aufgabe6
LIBTYPE = a
TARGET = notenspiegel
HEADERS = $(LDPATH)benotung.h $(LDPATH)fachnoten_liste.h $(LDPATH)fachnote.h 
SOURCE = $(TARGET).cpp
LDLIB=-l$(LIBNAME)

.PHONY: all clean 

all: $(TARGET)


clean:
		$(RM) $(TARGET).o $(TARGET) depend
		
$(TARGET): $(TARGET).o $(LDPATH)lib$(LIBNAME).$(LIBTYPE)
		$(CXX) $(LDFLAGS)  $< $(LDLIB) -o $@
		
depend: $(SOURCE) $(HEADERS)
		$(CXX) $(CPPFLAGS) -MM $(SOURCE) > $@
		
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $<
	
include depend

