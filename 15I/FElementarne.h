#pragma once
#include"Fun.h"

class Liniowa: public Fun{			//klasa dla funkcji liniowej
public:
	static Liniowa* utworz();		//tworzy funkcje liniowa i zwraca jej wskaznik
	double wartosc(double gdzie);	//zwraca f(gdzie)
	Liniowa* a(double co);			//ustawia wspolczynnik przy 1 potedze na co i zwraca wskaznik
	Liniowa* b(double co);			//ustawia wspolczynnik przy 0 potegdzie na co i zwraca wskaznik
private:
	double a_;
	double b_;
};

class Kwadratowa: public Fun{		//klasa dla funkcji kwadratowej
public:
	static Kwadratowa* utworz();		//tworzy funkcje kwadratowa i zwraca jej wskaznik
	double wartosc(double gdzie);		//zwraca f(gdzie)
	Kwadratowa* a(double co);			//ustawia wspolczynnik przy 2 potedze na co i zwraca wskaznik
	Kwadratowa* b(double co);			//ustawia wspolczynnik przy 1 potedze na co i zwraca wskaznik
	Kwadratowa* c(double co);			//ustawia wspolczynnik przy 0 potedze na co i zwraca wskaznik
private:
	double a_;
	double b_;
	double c_;
};
