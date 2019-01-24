#pragma once
#include"File.h"

class Dir : public File {
public:
	Dir(const char* name);			//konstruktor
	~Dir();							//glosny destruktor
	Dir& operator+=(File* f);		//dodaje katalog lub plik na spod listy
	File* get(string c);			//zwraca wskaznik do katalogu/pliku o danej nazwie
	void print(ostream& os,int indent) const;	//wypisuje ten obiekt do os
private:
	File** content_;			//zawartosc
	int size_;					//rozmiar
};


