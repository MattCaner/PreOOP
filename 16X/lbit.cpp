#include"lbit.h"

void resetBits(unsigned char* btable, unsigned int mask, int size){
	unsigned int mask2 = mask;		//mask2 przechowuje mask, zeby moc powielic wzorzec
	for(int i = 0; i<size; i++){
		unsigned int checker = 1;
		bool tmp = checker & mask;
		mask >>= 1;
		btable[i] = tmp;
		if(mask==0) mask = mask2;
	}
}

void printBits(const unsigned char* btable, int do_){
	for(int i = 0; i<do_; i++){
		cout << (bool)btable[i];
		if(i%8==7) cout << " "; //odstepy
	} 
	cout << endl;
}

void printBits(const unsigned char* btable, int od_, int do_){
	for(int i = od_; i<do_; i++){
		cout << (bool)btable[i];
		if(i%8==7) cout << " "; 
	}
	cout << endl;
}

void flipBit(unsigned char* btable, int ktory){
	btable[ktory] = btable[ktory]?0:1;
}

void setBit(unsigned char* btable, int ktory, int do_){
	btable[ktory] = do_;
}

int getBit(const unsigned char* num, int ktory){
	return num[ktory];
}

void printBitsB(const unsigned char* btable, int size){
	for(int i = 0; i<size; i++){
		cout << getBitB(btable,i);
	}
	cout << endl;
}

bool getBitB(const unsigned char* bnum, int ktory){
	unsigned char checker = 1;
	checker <<= ktory;
	return (bool)(checker & *bnum);
}
