#ifndef CHECKPESEL_H
#define CHECKPESEL_H


char find_pesel_crtl(const char* pesel);		//przyjmuje lancuch DOKLADNIE 10 znakow reprezentujacych cyfry i zwraca znak reprezentujacy cyfre kontrolna tego numeru PESEL
bool pesel_correct(const char* pesel);			//zwraca TRUE jesli cyfra kontrolna podanego numeru PESEL jest poprawna i FALSE jesli nie jest
#ifdef ADDITIONAL
//bool check_len(const char* schain, int len);		//sprawdza, czy schain ma dlugosc len (tzn. czy po len znakow wystepuje znak konca lancucha) i sprawdza, czy sa tam same cyfry
#endif


#endif
