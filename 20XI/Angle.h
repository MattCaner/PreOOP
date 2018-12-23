#pragma once

class Angle{
public:
		//konstruktory inne niz kopiujacy i dwuargumentowy nie istnieja!
	Angle(bool radians, double value);		//jezeli radians = TRUE, tworzy kat z value radianow. W przeciwnym wypadku tworzy kat z value katow.
	Angle(const Angle& a);			//konstruktor kopiujacy.

	static Angle fromRadians(double d);		//statyczna metoda, ktora wywoluje konstruktor generujacy Angle z radianow.
	static Angle fromDegrees(double d);		//statyczna metoda, ktora wywoluje konstruktor generujacy Angle ze stopni
	static Angle distance (const Angle& a1, const Angle& a2);	//statyczna metoda, ktora zwraca obiekt typu Angle bedacy roznica w stopniach miedzy jednym a drugim katem.
	
	double toRad() const {return inRads;}		//zwraca wartosc kata (w radianach)
	double toDeg() const {return Convert(inRads);}		//zwraca wartosc kata (w stopniach)

	void add(const Angle& a);	//dodaje to tego kata wartosci kata a

private:

	double trimWith (double value, double trimmer);	//dopasowuje value do przedzialu (0,trimmer), dodajac lub odejmujac trimmer do value tyle razy ile bedzie potrzebne.
	double Convert(double value, bool toDegrees = true) const;		//konwertuje double, domyslnie z radianow na stopnie
	double inRads;	//przechowuje wartosc kata
};
