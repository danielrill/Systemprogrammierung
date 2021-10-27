/*
 * fachnoten_liste.h
 *
 * Systemprogrammierung, Aufgabe 5
 *
 * Daniel Rill
 * 20.05.2021
 */

#ifndef FACHNOTEN_LISTE_H
#define FACHNOTEN_LISTE_H

#include <iterator>
#include "fachnote.h"

class fachnoten_liste final
{

    // Keine Copy und Move-Semantik
    fachnoten_liste(const fachnoten_liste&) = delete;
    fachnoten_liste& operator=(const fachnoten_liste&) = delete;
    fachnoten_liste(fachnoten_liste&&) = delete;
    fachnoten_liste& operator=(fachnoten_liste&&) = delete;

private:
    class element;
    element *head;
    void (*clear) (fachnote*);


public:
    explicit fachnoten_liste(void (*) (fachnote*));

    ~fachnoten_liste();

    fachnoten_liste& insert(fachnote*);

    class iterator final
    {
    private:
        element *current;
        explicit iterator(element*);

    public:
        bool operator!=(const iterator&) const;
        fachnote* operator*() const;
        iterator& operator++();

        friend class fachnoten_liste;
    };

    iterator begin();
    iterator end();

};

#endif
