#include"Dir.h"

Dir::Dir(const char* name): File(name), size_(0){
	content_ = new File* [10];
}
Dir::~Dir(){
	cout << "Deleting dir: " << name_ << endl;
	for(int i = 0; i<size_; i++){
		delete content_[i];
	}
	delete [] content_;
}
Dir& Dir::operator+=(File* f){
	//cout << f->getName() << endl;
	size_++;
	//cout << size_ << endl;
	content_[size_-1] = f;
	return *this;
}

File* Dir::get(string c){
	int found = -1;
	for(int i = 0; i<size_; i++){
		if(c==content_[i]->getName()) found = i;
	}
	if(found==-1) return nullptr;
	else return content_[found];
}

void Dir::print(ostream& os,int indent) const{
	for(int i = 0; i<indent; i++) os << "  ";
	os << name_<< endl;
	for(int i = 0; i<size_; i++){
		(*(content_+i))->print(os,indent+1);
	}
}
