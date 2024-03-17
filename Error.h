#pragma once
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