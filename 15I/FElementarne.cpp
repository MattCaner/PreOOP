#include"FElementarne.h"

Liniowa* Liniowa::utworz(){
	return new Liniowa();
}

double Liniowa::wartosc(double gdzie){
	return a_*gdzie+b_;
}

Liniowa* Liniowa::a(double co){
	a_ = co;
	return this;
}
Liniowa* Liniowa::b(double co){
	b_ = co;
	return this;
}

Kwadratowa* Kwadratowa::utworz(){
	return new Kwadratowa();
}
double Kwadratowa::wartosc(double gdzie){
	return a_*gdzie*gdzie+b_*gdzie+c_;
}
Kwadratowa* Kwadratowa::a(double co){
	a_ = co;
	return this;
}
Kwadratowa* Kwadratowa::b(double co){
	b_ = co;
	return this;
}
Kwadratowa* Kwadratowa::c(double co){
	c_ = co;
	return this;
}
