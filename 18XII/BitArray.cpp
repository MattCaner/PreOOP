#include"BitArray.h"
#include<iostream>
using std::cout;
using std::endl;

BitArray::BitArray(int size, bool init):size_(size){
	int arrSize = size/8 + 1;
	tab_ = new unsigned char[arrSize];
	for(int i = 0; i<arrSize; i++){
		tab_[i] = 0;
		if(init) tab_[i] = ~tab_[i];
	}
}

BitArray::~BitArray(){
	delete [] tab_;
}

void BitArray::print() const{
	for(int i = size_-1; i>=0; i--){
		if(i%8 == 7) cout << " <-" << i+1 << " ";
		cout << getByte(i);
	}
	cout << " <-0 ";
}
	
bool BitArray::getByte(int which) const{
	int octet = which/8;
	int position = which%8;
	unsigned char tmp = tab_[octet];
	tmp >>= position;
	return (tmp & 1);
}

void BitArray::setByte(int which, bool toWhat){
	int octet = which/8;
	int position = which%8;
	unsigned char tmp = 1;
	tmp <<= position;
	if(toWhat){
		tab_[octet] = tab_[octet] | tmp;
	}
	else{
		tab_[octet] = tab_[octet] & (~tmp);
	}
}



SingleBit BitArray::operator[](int which){
	return SingleBit(this,which);
}

bool BitArray::operator[](int which) const{
	return getByte(which);
}


void SingleBit::operator=(bool b){
	from_->setByte(pos_,b);
}

SingleBit::operator bool(){
	return from_->getByte(pos_);
}
