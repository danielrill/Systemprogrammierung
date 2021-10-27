/*
 * fachnoten_liste.cpp
 *
 * Systemprogrammierung, Aufgabe 5
 *
 * Daniel Rill
 * 20.05.2021
 */
 #include "fachnoten_liste.h"
 #include "fachnote.h"
 
 class fachnoten_liste::element final
 {
 	element *next;
 	fachnote* n;
 	
 	element(element *e, fachnote* m) : next(e), n(m) { }
 	
 	friend class fachnoten_liste;
 	friend class fachnoten_liste::iterator;
 };
 
 fachnoten_liste::iterator::iterator(element *e) : current(e) { }
  
  
  // Iterator
 
 bool fachnoten_liste::iterator::operator!=(const iterator& i) const
 {
 	return this->current != i.current;
 }
 
 fachnote* fachnoten_liste::iterator::operator*() const
 {
 	return this->current ->n;
 }
 
 fachnoten_liste::iterator& fachnoten_liste::iterator::operator++()
 {
 	this ->current = this -> current -> next;
 	return *this;
 }
 
 
 //MemberFunktionen liste
 

 
 fachnoten_liste::fachnoten_liste(void (*a) (fachnote*))
 	: head(nullptr), clear(a) 
 	{ }
 	
 fachnoten_liste::~fachnoten_liste()
 {
 	element *e = this->head;
 	while (e != nullptr)
 	{
 		clear(e -> n);
 		element *g = e;
 		e = e->next;
 		delete g;
 	}
 }
 //BonusAufgabe 2
fachnoten_liste& fachnoten_liste::insert(fachnote* x)
{
	if (head == NULL || x->note < head->n->note)
	{
		head = new element(head, x);
		return *this;
	} 
	else 
	{
	
		element *i = head;
		while(i->next != NULL &&  i->next->n->note < x->note)
		{
			i = i->next;
		}
		i->next = new element(i->next, x);
		return *this;
	}
	
} 

fachnoten_liste::iterator fachnoten_liste::begin()
{
	return fachnoten_liste::iterator(this->head);
}
fachnoten_liste::iterator fachnoten_liste::end()
{
	return fachnoten_liste::iterator(nullptr);
}
 
 

 
