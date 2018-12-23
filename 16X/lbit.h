#ifndef _LBIT_H
#define _LBIT_H

#include<iostream>

using std::cout;
using std::endl;

/*
* z zadania: skoro w tablicy to pojemnosci 64 unsigned char mozna przechowac 64 bity 
* w tablicach znakow, jesli jest 0, to bit jest uznany za 0. Jest jest co innego (ale zwykle 1), bit jest uznany za 1. 
* funkcje getBitB i printBitsB sa zrobione, bo w drugiej czesci zadania jest operacja na pojedynczym unsigned char i dzialaja juz bitowo.
* 
* 
* ze wzgledu na to, ze czesc zadania korzysta z tablic znakowych, a czesc z bitowych, sa osobne funkcje zakonczone BitsB obslugujace tablice bitowe.
* 
*/

void resetBits(unsigned char* btable, unsigned int mask, int size);	//resetuje bity w tablicy o rozmiarze size do maski mask

void printBits(const unsigned char* btable, int ktory);	//wypisuje bity ze znakowej tablicy bitow az do bitu ktory
void printBits(const unsigned char* btable, int od_, int do_); //wypisuje bity ze znakowej tablicy znakow miedzy od_ a do_

void flipBit(unsigned char* btable, int ktory);	//zamienia w znakowej tablicy znakow bit ktory na bit przeciwny

void setBit(unsigned char* btable, int ktory, int do_);	//zamienia bit ktory w znakowej tablicy znakow na bit o wartosci do_

int getBit(const unsigned char* num, int ktory);	//zwraca bit ze znakowej tablicy bitow, stojacy na pozycji ktory



void printBitsB(const unsigned char* bnum, int size);	//dziala dla bitowej tablicy (nie znakowej)

bool getBitB(const unsigned char* bnum, int ktory);		//dziala dla bitowej tablicy (nie znakowej)


#endif //_LBIT_H
