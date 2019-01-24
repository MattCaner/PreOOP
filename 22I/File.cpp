#include"File.h"

File::File(const char* name){
	name_ = name;
}
File::~File(){
	cout << "About to delete " << name_ << endl;
}
string& File::getName(){
	return name_;
}

ostream& operator << (ostream& os, const File& f){
	f.print(os,0);
	return os;
}

void File::print(ostream& os,int indent) const{
	for(int i = 0; i<indent; i++) os << "  ";
	os << name_ << endl;
}
