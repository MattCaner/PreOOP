#include"check_pesel.h"

const static int weight_vector[10] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};	//staly wektor wag cyfr w PESELu, z ktorego korzystaja funkcje

char find_pesel_crtl(const char* pesel){
	int tab[10];
	for(int i = 0; i < 10; i++){
		tab[i] = (int)(pesel[i]) - (int)('0');
	}
	int sumak = 0;
	for(int i = 0; i<10; i++){
		sumak += tab[i]*weight_vector[i];
	}
	if (sumak%10 ==0) return '0';		//dla wyjatkowego przypadku, gdy wychodzi modulo rowne 0, czyli ostateczne odejmowanie to 10-0, czyli cyfra to 0
	return (10-(sumak%10))+'0';
}


bool pesel_correct(const char* pesel){
	if(pesel[10] == find_pesel_crtl(pesel)) return true;
	return false;
	
}
/*
bool check_len(const char* schain, int len){
	int i = 0
	for(i; i<=len; i++){
		
		
	}	
}*/
