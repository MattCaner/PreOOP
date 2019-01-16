#include"Arr2D.h"
#include<iostream>

using std::cout;
using std::endl;

Arr2D::Arr2D(int rows, int columns,int* source): _content(source), _rows(rows), _columns(columns), _ownsMemory(false){

}

Arr2D Arr2D::adopt(int* source, int rows, int columns) {
	return Arr2D(rows,columns,source);
}

Arr2D::Arr2D(int rows, int columns): _rows(rows), _columns(columns), _ownsMemory(true){
	_content = new int[rows*columns];
}

Arr2D::~Arr2D(){
	if(_ownsMemory) delete [] _content;
}

Arr2D::Arr2D(const Arr2D& a): _content(a._content), _rows(a._rows), _columns(a._columns), _ownsMemory(a._ownsMemory){
	if(_ownsMemory) {
	_content = new int [a._rows*a._columns];
	for(int i = 0; i<_rows*_columns; i++){
		_content[i] = a._content[i];
	}
	}
}

Arr2D Arr2D::operator=(const Arr2D& a){
	if(this == &a) return *this;
	if(_ownsMemory){
		delete [] _content;
		_columns = a._columns;
		_rows = a._rows;
		_content = new int[_rows*_columns];
		for(int i = 0; i<_rows*_columns; i++){
			_content[i] = a._content[i];
		}
		return *this;
	}
	else{
		_columns = a._columns;
		_rows = a._rows;
		return *this;
	}
}
	
Row Arr2D::operator[](int rowNum){
	return Row(_content+(rowNum*_columns),_columns);
}

int& Row::operator[](int position){
	return *(_start+position);
}

void operator<<=(const char* text, const Arr2D& a){
	cout << text << endl;
	for(int i = 0; i<a._columns*a._rows; i++){
		cout << a._content[i] << " ";
		if(i%a._columns==a._columns-1) cout << endl;
	}
	cout << text << endl;
}


