#include"List.h"
#include<iostream>

using std::cout;
using std::endl;



void prepare(List* l){
	l->_size = 0;
	l->_first = nullptr;
}

void prepare(List* l, const List* lcopy){
	l->_size=lcopy->_size ;
	Element* tmp = new Element;
	tmp->e00 = elementOfList(lcopy,0,0,0);
	tmp->e01 = elementOfList(lcopy,0,0,1);
	tmp->e10 = elementOfList(lcopy,0,1,0);
	tmp->e11 = elementOfList(lcopy,0,1,1);
	l->_first = tmp;
	for(int i = 1; i< l->_size; i++){
		Element* tmp1 = new Element;
		tmp1->e00 = elementOfList(lcopy,i,0,0);
		tmp1->e01 = elementOfList(lcopy,i,0,1);
		tmp1->e10 = elementOfList(lcopy,i,1,0);
		tmp1->e11 = elementOfList(lcopy,i,1,1);
		tmp->_next = tmp1;
		tmp = tmp->_next;
	}
}

void add(List* l, int tab[2][2] ){
	Element* e = new Element;
	e->e00 = tab[0][0];
	e->e01 = tab[0][1];
	e->e10 = tab[1][0];
	e->e11 = tab[1][1];
	
	if(l->_size == 0){
		l->_first = e;
	}
	else{	
		Element* tmp = l->_first;
		for(int i = 0; i< l->_size-1; i++){
			tmp = tmp->_next;
		}
		tmp->_next=e;
	}
	(l->_size)++;
}

bool empty(const List* l){
	if(l->_size==0x0){
		return true;
	}
	return false;
}

void print(List const* l){
	//pierwsza linijka:
	for(int i = 0; i< l->_size; i++){
		cout << elementOfList(l,i,0,0) << " " << elementOfList(l,i,0,1) << "   ";
	}
	cout << endl;
	for(int i = 0; i< l->_size; i++){
		cout << elementOfList(l,i,1,0) << " " << elementOfList(l,i,1,1) << "   ";
	}
	cout << endl;
}


int elementOfList(const List* l, int elementNo, int x, int y){		//rzecz jasna elementy liczymy od 0.
	Element* tmp = l->_first;
	for(int i = 0; i<elementNo; i++){
		tmp = tmp->_next;
	}
	if(x==0&&y==0) return tmp->e00;
	if(x==1&&y==0) return tmp->e10;
	if(x==0&&y==1) return tmp->e01;
	if(x==1&&y==1) return tmp->e11;
	//moze wystapic blad zwracania TYLKO JESLI PODANE x i y SA ZE ZLYCH ZAKRESOW. Funkcja jest nieyetiodporna.
}

void clear(List* l){
	Element* tmp2 = l->_first;
	Element* tmp;
	
	for(int i = 0; i<l->_size; i++){
		tmp = tmp2;
		tmp2 = tmp->_next;
		delete tmp;
	}
	l->_size = 0;
}

