#pragma once

class Frac{
public:
	Frac(int num, int denum);		//konstruktor
	Frac(const Frac& f);			//konstruktor kopiujacy
	Frac(double d);					//konstuktor z doubla, jednoczesnie konwerter double->frac


	operator double() const;		//konwerter do double
	
	Frac add(const Frac& f) const;		//dodawanie ulamkow
	void print(const char* header = "") const;	//wypisywanie ulamka po tekscie header

	static void setCnvPrecision(int jaka);		//manualne ustawienie precyzji konwersji na liczbe "jaka"
	
private:
	static int CnvPrecision;			//statyczna precyzja przy konwersji
	int num_;				//licznik ulamka
	int denum_;				//mianownik ulamka
};


/*UWAGA (kompilacja):

	kompilator moze czasem zostawiac warning wynikajacy ze specyficznego
	dzialania petli for. Jest to jednak zamierzone dzialanie, ktore moze
	sugerowac, ze nic ona nie robi - w rzeczywistosci jej jedynym celem
	jest przesuwanie stworzonego wczesniej iteratora i, ktory stanie sie
	mianownikiem.

*/

/*UWAGA (dokladnosc konwersji):
	
	Z racji niedokladnego zapisu liczb przy uzyciu double, konwersja w 
	obie strony jest dokonywana	z pewna dokladnoscia i czasami otrzymane 
	wyniki moga sie nieznacznie roznic na roznych maszynach i przy roznych
	wywolaniach programu

*/
