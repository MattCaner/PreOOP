#include"FZlozona.h"


double FZlozona::wartosc(double gdzie){
	return f1_->wartosc(f2_->wartosc(gdzie));
}
