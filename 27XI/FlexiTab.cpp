#include"FlexiTab.h"
#include<iostream>

using std::cout;
using std::endl;


FlexiTab::FlexiTab(int lowIndex, int hiIndex): lowIndex_(lowIndex), hiIndex_(hiIndex){
	int actualSize = hiIndex_ - lowIndex_;
	tab_ = new double[actualSize];
}

double& FlexiTab::at(int index){
	return tab_[index-lowIndex_];
}

double FlexiTab::cat(int index) const{
	return tab_[index-lowIndex_];
}

FlexiTab::~FlexiTab(){
	delete [] tab_;
}

FlexiTab::FlexiTab(const FlexiTab& ft): lowIndex_(ft.lowIndex_),hiIndex_(ft.hiIndex_){
	int actualSize = hiIndex_ - lowIndex_;
	tab_ = new double[actualSize];
	for(int i = lowIndex_; i< hiIndex_; i++)  at(i) = ft.cat(i);
}

FlexiTab::FlexiTab(const FlexiTab& ft,int lowIndex, int hiIndex): lowIndex_(lowIndex),hiIndex_(hiIndex){
	int actualSize = hiIndex - lowIndex;
	tab_ = new double[actualSize];
	for(int i = lowIndex_; i< hiIndex_; i++)  at(i) = ft.cat(i);
}

void FlexiTab::setAll(double value){
	for(int i = lowIndex_; i< hiIndex_; i++)  at(i) = value;
}

void FlexiTab::print(const FlexiTab& ft){
	for(int i = ft.lowIndex_; i< ft.hiIndex_; i++)  cout << i << ":" << ft.cat(i) << " ";
}

bool FlexiTab::inRange(int index) const{
	if(index>=lowIndex_&&index<=(hiIndex_-1)) return true;
	else return false;
}
