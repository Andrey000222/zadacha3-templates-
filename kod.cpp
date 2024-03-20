#include"kod.h"
template<typename T>
IntegerArray<T>::IntegerArray(unsigned size_) :size_array(size_) {
	if (size_ <= 0)
	{
		throw Error_1();
	}
	array1 = new T(size_);
	cout << "the array1 has been created" << endl;
}
template<typename T>
IntegerArray<T>::IntegerArray(IntegerArray& a, unsigned size_) {
	T* array_1;
	array_1 = new T(size_);
	std::copy_n(a.array1, size_, array_1);
	size_array = size_;
	array1 = array_1;
	cout << "a new array has been created and an array has been copied To it" << endl;
};
template<typename T>
void IntegerArray<T>::new_array_size(int size_) {
	if (size_ <= 0) {
		throw Error_1();
	}
	T* array_;
	array_ = new T(size_);
	std::copy_n(array1, size_, array_);
	delete[] array1;
	size_array = size_;
	array1 = array_;
	cout << "new array1 size" << endl;
}
template<typename T>
void IntegerArray<T>::chang_num_array(int nam) {
	if ((nam <= 0) || (nam > size_array)) {
		throw Error_2();
	}
	cout << endl << "enter a number" << endl;
	T nam_1;
	cin >> nam_1;
	cout << endl;
	array1[(nam - 1)] = nam_1;
}
template<typename T>
void IntegerArray<T>::enum_array() {
	cout << endl << endl;
	for (size_t i = 0; i < size_array; i++)
	{
		cout << array1[i] << endl;
	}
	cout << endl << endl;
}
template<typename T>
void IntegerArray<T>::remov_elem_array(int nam) {

	if ((nam > size_array) || (nam <= 0)) {
		throw Error_2();
	};
	T* array_ = new T[size_array - 1];
	for (auto i = 0; i < (nam - 1); i++)
	{
		array_[i] = array1[i];
	};
	for (auto i = nam; i < size_array; i++)
	{
		array_[i - 1] = array1[i];
	};
	size_array -= 1;
	array1 = array_;

}
template<typename T>
void IntegerArray<T>::search_nam(int nam) {
	for (auto i = 0; i < size_array; i++)
	{
		if (nam == array1[i]) {
			cout << "the number was found at the position - " << (1 + i) << endl;
		}
	}
};
template<typename T>
void IntegerArray<T>::begin_nam(int nam) {
	T size_ = size_array + 1;
	T* new_arr = new T[size_];
	for (auto i = 0; i < size_; ++i) {
		if (i == 0) {
			new_arr[i] = nam;
		}
		new_arr[i + 1] = array1[i];
	}
	size_array = size_;
	array1 = new_arr;
	cout << endl << nam << " - added to the beginning" << endl;
};
template<typename T>
void IntegerArray<T>::end_nam(int nam) {
	T size_ = size_array + 1;
	T* new_arr = new T[size_];
	for (auto i = 0; i < size_; ++i) {
		if (i == size_array) {
			new_arr[size_array] = nam;
		}
		else
			new_arr[i] = array1[i];
	}
	size_array = size_;
	array1 = new_arr;
	cout << endl << nam << " - added to the end" << endl;
};