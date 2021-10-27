/*
 * fachnote.cpp
 *
 * Systemprogrammierung, Aufgabe 5
 *
 * Daniel Rill
 * 20.05.2021
 */
 
 
 
 
 #include <stdexcept>
 #include "fachnote.h"
 
 //using namepsace std;
 
 fachnote :: fachnote(const std::string& f, const benotung& n) : fach(f), note(n)
 {
 	if (f.length() == 0)
 	{
 		throw std::invalid_argument("ungültiger Fachname");
 	}
 }
 
std::unique_ptr<fachnote> fachnote::new_instance(const std::string& f, const benotung& n)
 {
	return std::unique_ptr<fachnote>(new fachnote(f, n));
} 
