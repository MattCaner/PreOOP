#pragma once

struct Element{		//struktura pojedynczego elementu listy
	int e00;		//elementy eXY okreslaja wartosc znajdujace sie na pozycji (X,Y) tablicy.
	int e01;
	int e10;
	int e11;
	Element* _next;		//wskaznik na nastepny element
};


struct List{		//lista elementow
	int _size;			//rozmiar (dla prostoty, wygody i szybkosci)
	Element* _first;		//wskaznik na head
};

	
void prepare(List* l);		//przygotowuje liste do wykorzystania, inicjuje jej wartosci.
void prepare(List* l,const List* lcopy);	//kopiuje liste lcopy do listy l
void add(List* l, int[2][2]);		//dodaje element (w postaci tablicy 2x2) na koniec listy l
bool empty(const List* l);		//zwraca true, jesli lista jest pusta, false jesli jest pelna.
void print(List const* l);		//wypisuje liste l.
void clear(List* l);			//czysci liste l. Umozliwia jej dalsze wykorzystanie. Kasuje elementy i ustala _size na 0. 
int elementOfList(const List* l, int elementNo, int x, int z);		//zwraca element (x,y) z pozycji elementNo z listy l
