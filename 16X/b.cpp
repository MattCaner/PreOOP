#ifndef _B_H
#define _B_H

#include<iostream>

using std::cout;
using std::endl;


void resetBits(unsigned char* btable, unsigned int mask, int size){
	unsigned char masktmp = 0;
	for(int i = 0; i<size; i++){
		btable |= masktmp;
		btable &= mask;
		if(i<size+1) btable <<= sizeof(unsigned char);		
	}
}

void printBits(const unsigned char* btable, int ktory){
	unsigned char mask = 1;
	for(int i = 0; i<=ktory/sizeof(char); i++){
		unsigned char tmp = btable[i];
		for(int j = 0; j<sizeof(char); j++){
			tmp = 
		}
	}
}

void printBits(const unsigned char* btable, int od_, int do_){

}
void flipBit(unsigned char* btable, int ktory){

}

void setBit(unsigned char* btable, int ktory, int do_){

}
int getBit(const unsigned char* num, int ktory){


}

#endif //_LBIT_H
