/*
 * fachnote.h
 *
 * Systemprogrammierung, Aufgabe 5
 *
 * Daniel Rill
 * 20.05.2021
 */



#ifndef FACHNOTE_H
#define FACHNOTE_H

#include <string>
#include "benotung.h"

//using namespace std;

class fachnote final
{
private:

public:


    fachnote(const std::string& f, const benotung& n);


    fachnote(const fachnote&) = delete;

    fachnote(fachnote&&) = delete;

    fachnote& operator =(const fachnote&) = delete;

    fachnote& operator =(fachnote&&) = delete;

    const std::string fach;
    const benotung note;

};

#endif // 
