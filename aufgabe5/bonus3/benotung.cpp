/*
 * benotung.cpp
 *
 * Systemprogrammierung, Aufgabe 5
 *
 * Daniel Rill
 * 20.05.2021
 */
 
 #include <stdexcept>
 #include <string>
 #include "benotung.h"
 
const benotung benotung::beste = benotung{10};
const benotung benotung::schlechteste = benotung{50};
 
 //using namespace std;

 benotung::benotung(int note):note(note)
 {
 	geprueft(note);
 }
 
  //BonusAufgabe 1
 benotung::benotung(int note1, int note2) : note((note1+note2)/2)
 {
 	geprueft(note1);
 	geprueft(note2);
 }
 bool benotung::geprueft(int note)
 {
 	 switch (note)
 	{
 		case 10:
 		case 13:
 		case 17:
 		case 20:
 		case 23:
 		case 27:
 		case 30:
 		case 33:
 		case 37:
 		case 40:
 		case 50:
 			break;
 		default:
 			throw std::invalid_argument("unzulässige Noteneingabe " + std::to_string(note));
 	}
 	return note;
 }

 int benotung::int_value() const 
 {
 	return this->note;
 }
 
 bool benotung::ist_bestanden() const
 {
 	return this->note <= 40;
 }
 
bool operator==(benotung note1, benotung note2)
 {
 	return note1.int_value() == note2.int_value();
 
 }

 
