#pragma once
#include<iostream>
#include<string>
using std::ostream;
using std::cout;
using std::string;
using std::endl;

class File{			//klasa przechowujaca instancje plikow
public:
	File(const char* name);		//konstruktor
	virtual ~File();					//glosny destruktor
	string& getName();			//zwraca nazwe	
	virtual void print(ostream& os,int indent) const;		//funkcja wypisuje ten obiekt do ostreama os
	friend ostream&	operator << (ostream& os, const File& f);	//zaprzyjaznione wypisywanie, korzysta z funkcji print

protected:
	string name_;
};
