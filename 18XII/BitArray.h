#pragma once

struct SingleBit;

class BitArray{
public:
	BitArray(int size, bool init = false);		//konstruktor
	~BitArray();								//destruktor zwalnia pamiec
	void print() const;							//wypisuje cala tablice oktetami
	
	bool getByte(int which) const;				//zwraca bit lezacy na pozycji "which"
	void setByte(int which, bool toWhat);		//zmienia bit lezacy na pozycji "which" na wartosc "toWhat"

	SingleBit operator[](int which);			//zwraca pojedynczy bit w postaci struktury SingleBit, co pozwala modyfikowac pojedyncze bity
	bool operator[](int which) const;			//zwraca (wartosciowo)

private:
	int size_;					//wielkosc (ilosc bitow)
	unsigned char* tab_;		//tablica bajtow, ktore przechowuja po 8 bitow kazdy
};


// Struktura SingleBit przechowuje "wskaznik" do pojedynczego bita w BitArrayu: 
// przechowuje wskaznik do BitArraya oraz pozycje bita, co pozwala na 
// opdowiednie modyfikacje pojedynczych bitow w BitArray.

struct SingleBit{
	
	SingleBit(BitArray* from, int pos): from_(from), pos_(pos) {}		//podstawowy konstruktor, po prostu inicjalizuje wartosci
	void operator=(bool b);												//przeladowany operator przypisania. Przypisuje b do bitu na pozycji pos_ w BitArrayu pod from_
	operator bool();													//zwraca bit znajdujacy sie na pos_ w BitArrayu from_

private:
	BitArray* from_;				//BitArray, na ktory "wskazuje" ten SingleBit
	int pos_;						//Pokazuje, na ktora pozycje w BitArrayu from pokazuje ten SingleBit
};
