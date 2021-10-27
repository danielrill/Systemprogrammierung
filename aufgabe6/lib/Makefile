#
# Makefile
# Aufgabe6 
# Daniel Rill
# 18.06.2021
# der Löschbefehl RM, CompilerAufruf CXX sowie die MusterRegel %.o: %.cpp werden
# automatisch erzeugt

LIBTYPE = a
LIBNAME=aufgabe6
CXX = g++
CXXFLAGS = -g -c -W -Wall -Weffc++ -Wold-style-cast -std=$(STD) -pedantic -fpic
STD = c++11
RM = rm -f
AR = ar rs

TARGET=libaufgabe6
SOURCES=fachnoten_liste.cpp fachnote.cpp benotung.cpp
HEADERS=$(SOURCES:.cpp=.h)
OBJECT=$(SOURCES:.cpp=.o)

.PHONY: all clean

all: lib$(LIBNAME).$(LIBTYPE)

clean:
		$(RM) $(TARGET).a $(TARGET).so $(OBJECT) depend
		
depend: $(SOURCES) $(HEADERS) 
		$(CXX) -MM $(SOURCES) > $@
		
lib$(LIBNAME).a: $(OBJECT)
		$(AR) $@ $^
		
lib$(LIBNAME).so: $(OBJECT) 
		$(CXX) -shared $^ -o $@
		
%.o: %.cpp
		$(CXX) $(CXXFLAGS) $<
		
include depend

