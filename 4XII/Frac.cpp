#include"Frac.h"
#include<iostream>
using std::cout;
using std::endl;

int Frac::CnvPrecision = 1000000;

void Frac::setCnvPrecision(int jaka){
	Frac::CnvPrecision = jaka;
}

Frac::Frac(int num, int denum): num_(num), denum_(denum) { }

Frac::Frac(const Frac& f): num_(f.num_), denum_(f.denum_) { }

void Frac::print(const char* header) const{
	cout << num_ << "/" << denum_ << header;	
}

Frac Frac::add(const Frac& f) const{
	return Frac(num_*f.denum_+denum_*f.num_,denum_*f.denum_);
}

Frac::Frac(double d){
	int i = 1;		//i jest mianownikiem
	for(i; i<CnvPrecision && (d*i)-(int)(d*i)>0; i*=10);
	num_ = (int)(i*d);
	denum_ = i;
}

Frac::operator double() const{
	return (double)num_/(double)denum_;
}
