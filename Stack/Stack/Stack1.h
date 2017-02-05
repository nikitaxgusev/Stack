#pragma once
#include <iostream>

typedef int St_i;
typedef bool b;
template <class T>
class Stack1
{
private:
	T* arr;
	T max;
	T index;
	St_i number;
public:
		Stack1<T>::Stack1(): max(1000),index(0) {
		std::cout << "Enter a size: ";
		std::cin >> number;
		if (number <= max) {
			arr = new T[number];
			max = number;
		}
		else
			std::cout << "Stack is overflow"<<std::endl;
	}

		Stack1<T>::~Stack1() {
		delete[] arr; }

		b Push(St_i n) {
			if (index == max)
				return false;
			else {
				arr[index] = n;
				index++;
				return true;
			}
		}

	St_i    Pull() {
			if (index < 0)
				return 0;
			else
				return arr[--index];
		}
	b isEmpty() {
		if (index <= 0)
			return true;
		else return false;
	}

	b isFull() {
		if (index == max)
			return true;
		else return false;
	}


};

