#include"Angle.h"
#include<iostream>
#include<math.h>

double Angle::trimWith(double value, double trimmer){
	while(value>trimmer){
		value -= trimmer;
	}
	while(value<0.0){
		value += trimmer;
	}
	return value;
}

Angle Angle::fromRadians(double d){
	return Angle(true, d);
}


Angle Angle::fromDegrees(double d){
	return Angle(false,d);
}

Angle Angle::distance(const Angle& a1, const Angle& a2){
	if(a2.toRad()>a2.toRad()){
		return Angle(true, a1.toRad()-a2.toRad());
	}
	else{
		return Angle(true, a2.toRad()-a1.toRad());
	}
}

double Angle::Convert(double value, bool toDegrees) const{
	if(toDegrees) return value * 360.0 / (2*M_PI);
	else return value * 2 * M_PI / 360.0;
}


Angle::Angle(bool radians, double value){
	if(radians){
		value = trimWith(value,2*M_PI);
		inRads = value;
	}
	else{
		value = trimWith(value,360.0);
		inRads = Convert(value,false);
	}	
}

Angle::Angle(const Angle& a){
	inRads = a.toRad();
}

void Angle::add(const Angle& a){
	inRads += a.toRad();
	inRads = trimWith(inRads,2*M_PI);
}
