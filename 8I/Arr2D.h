#pragma once

class Row;
class Arr2D;

void operator<<=(const char* text, const Arr2D& a);		//operator wypisywania


class Arr2D{
public:
	static Arr2D adopt (int* source, int rows, int columns);	//adoptuje miejsce w pamieci (tablice) do wykorzystania przez Arr2D.	
	Arr2D(int rows, int columns);								//konstruktor. Obiekt bedzie zarzadzal pamiecia.
	Arr2D(int rows, int columns,int* source);					//konstruktor. Obiekt wykorzysta source i nie bedzie zarzadzal pamiecia.
	Arr2D(const Arr2D& a);										//konstruktor kopiujacy.
	~Arr2D();													//destruktor.

	Arr2D operator=(const Arr2D& a);							//operator przypisania.
	
	Row operator[](int rowNum);									//zwraca Row, zaczepiony do rzedu w tablicy.


	friend void operator<<=(const char* text, const Arr2D& a);	//umozliwia wypisywanie obiektu.

private:		
	int* _content;					//zawartosc. Moze byc wskaznikiem do zewnetrznej pamieci lub do pamieci obslugiwanej przez klase.
	int _rows;						//rozmiar
	int _columns;					//rozmiar
	bool _ownsMemory;				//informuje, czy obiekt zarzadza pamiecia _content
};

class Row{														//Klasa Row przechowuje wskaznik do pojedynczego rzedu wewnatrz tablicy obslugiwanej przez Arr2D.
public:
	Row(int* start,int size): _start(start), _size(size) {}		//prosty konstruktor obiektu.
	int& operator[](int position);								//zwraca referencje do pojedynczej wartosci z rzedu na pozycji position.
private:
	int* _start;						//wskaznik do poczatku rzedu.
	int _size;							//rozmiar. Nieuzywany, ale mozliwe, ze przyda sie przy implementacji bardziej odpornej na bledy klasy.
};

