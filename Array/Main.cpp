#include <iostream>
#include "DynamicArray.h"
#include "DynamicArray.cc"

using namespace std;
using namespace practicecpp;

int main() {

	DynamicArray myArray;
	myArray.Push(1);
	cout << myArray.GetSize() << endl;
	
	return 0;
}