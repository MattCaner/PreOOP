#pragma once
#include"Fun.h"

class Sinus: public Fun{		//klasa obsluguje funkcje sinus
public:
	Sinus() = default;
	double wartosc(double gdzie);	//zwraca wartosc f(gdzie)
};
