#pragma once
#include"Fun.h"

class FZlozona: public Fun{			//klasa do obslugiwania zlozenia dwoch funkcji
public:
	FZlozona(Fun* f1, Fun* f2): f1_(f1), f2_(f2) {}		//tworzy zlozenie funkcji f1 z funkcja f2
	double wartosc(double gdzie);						//zwraca f1(f2(gdzie))
private:
	Fun* f1_;
	Fun* f2_;
};
