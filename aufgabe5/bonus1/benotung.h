/*
 * benotung.h
 *
 *  Systemprogrammierung, Aufgabe 5
 *
 * Daniel Rill
 * 20.05.2021
 */


#ifndef BENOTUNG_H
#define BENOTUNG_H
#define SCHLECHTESTE 50
#define BESTE 10


class benotung final
{
private:
    int note;
    //int mittelWert;


public:
    explicit benotung(int note); // Konstruktor
    
    explicit benotung(int note1, int note2);	//Bonusaufgabe1
    
    static bool geprueft(int);
    
    int int_value() const;

    bool ist_bestanden() const;

    friend bool operator ==(benotung note1, benotung note2);
    
    friend bool operator<(benotung note1, benotung note2);

    const static benotung beste;

    const static benotung schlechteste;
};

#endif		// 
