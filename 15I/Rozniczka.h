#pragma once
#include"Fun.h"

class ProstaRozniczka{			//klasa dziala jak operator do rozniczkowania
public:
	ProstaRozniczka(double precyzja): precyzja_(precyzja) {}	//tworzy klase do rozniczkowania z dana precyzja
	ProstaRozniczka* z(Fun* f);			//zwraca funkcje bedaca pochodna funkcji f
	double w(double gdzie);				//zwraca rozniczke w gdzie
private:
	double precyzja_;			//precyzja rozniczkowania
	Fun* f_;
};
