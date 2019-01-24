#include"Rozniczka.h"


ProstaRozniczka* ProstaRozniczka::z(Fun* f){
	f_ = f;
	return this;
}

double ProstaRozniczka::w(double gdzie){
	return (f_->wartosc(gdzie+precyzja_)-f_->wartosc(gdzie))/precyzja_;
}
