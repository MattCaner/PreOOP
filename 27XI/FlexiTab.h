#pragma once

class FlexiTab{
public:
	FlexiTab(int lowIndex, int hiIndex);				//konstruktor rezerwuje miejsce na tablice od lowIndex do hiIndex-1
	FlexiTab(const FlexiTab& ft);						//konstruktor kopiujacy, kopiuje cala tablice
	FlexiTab(const FlexiTab& ft, int lowIndex, int hiIndex);	//konstruktor kopiujacy, kopiuje tylko miedzy okreslonymi indeksami
	~FlexiTab();				//destruktor zwalnia pamiec

	void setAll(double value);		//ustawia wszystkie wartosci w tablicy na value
	double& at(int index);			//at zwraca referencje do danego indeksu
	double cat(int index) const;	//const-at (cat) zwraca wartosc z danego indeksu
	bool inRange(int index) const;	//zwraca true, jesli index jest w zakresie tablicy lub false, jesli nie jest

	static void print(const FlexiTab& ft);		//wypisuje podana tablice

	int getLowIndex() const {return lowIndex_;}			//funkcje get-only dla poszczegolnych zmiennych i wartosci
	int getHighIndex() const {return hiIndex_;}
	int getActualSize() const {return hiIndex_-lowIndex_;}

private:
	int lowIndex_;		//najnizszy index
	int hiIndex_;		//najwyzszy index+1
	double* tab_;		//tablica wartosci
};
