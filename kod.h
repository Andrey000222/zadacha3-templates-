#pragma once
#include<iostream>
using namespace std;
template<typename T> class IntegerArray {
public:
	virtual ~IntegerArray() {
		cout << "clear array1" << endl;
		delete[] array1;
	};
	IntegerArray(unsigned size_);
	IntegerArray(IntegerArray& a, unsigned size_);
	void new_array_size(int size_);
	void chang_num_array(int nam);
	void enum_array();
	void remov_elem_array(int nam);
	void search_nam(int nam);
	void begin_nam(int nam);
	void end_nam(int nam);
protected:
	unsigned size_array;
	T* array1;
};
class Error_1 {
public:
	const char* what() {
		return "the array must be greater than 0";
	}
};
class Error_2 {
public:
	const char* what() {
		return "the value must be within the array";
	}
};