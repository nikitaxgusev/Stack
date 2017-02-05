#include "Stack1.h"
#include <iostream>


int main() {

	Stack1<St_i> st;
	for (St_i i(0); !st.isFull(); i++)
		st.Push(i + 1);
	for (St_i i(0); !st.isEmpty(); i++) 
		std::cout << st.Pull() << std::endl;

	system("pause");
	return 0;
}