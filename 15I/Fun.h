#pragma once
#include<iostream>

class Fun{			//abstrakcyjna klasa bazowa dla wszystkich funkcji. Zaklada, ze funkcja moze zwracac wartosc dla jakiejs wartosci
public:
	virtual double wartosc(double gdzie) = 0;		//wirtualna metoda, baza dla metod zwracajacych wartosc funkcji
	virtual ~Fun() = default;
};
