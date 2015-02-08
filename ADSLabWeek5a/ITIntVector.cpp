#include "ITIntVector.h"
#include <iostream>
#include <string>
using namespace std;

ITIntVector::ITIntVector(const int capacity)
{
	vectorSize = 0;
	pointer = 0;
	vectorCapacity = capacity;
	vector = new int[vectorCapacity];
}

ITIntVector::~ITIntVector()
{
	delete vector;
}

int ITIntVector::push_back(int val){
	vector[pointer] = val;
	vectorSize++;
	cout << "Pointer: " << pointer + 1 << endl;
	return pointer++;
}
const int& ITIntVector::at(int index) const{
	if (index < 0 || index > vectorCapacity){
		cout << "Exception::Index out of bounds: index value of " << index;
		string error = index > vectorCapacity ? " exceeded the capacity of " + std::to_string(vectorCapacity) : " below the minimum required index of " + std::to_string(0);
		cout << error << endl;
		return -1;
	}
	return vector[index];	
}

int& ITIntVector::at(int index){
	if (index < 0 || index > vectorCapacity){
		cout << "Exception::Index out of bounds: index value of " << index;
		string error = index > vectorCapacity ? " exceeded the capacity of " + std::to_string(vectorCapacity) : " below the minimum required index of " + std::to_string(0);
		cout << error << endl;
		//return -1;
		//return index;
	}
	return vector[index];
}

int ITIntVector::size(){
	return vectorSize;
}

int ITIntVector::capacity(){
	return vectorCapacity;
}

int ITIntVector::resize(int index){
	int* temp = new int[index];

	if (index < vectorSize){
		for (int i1 = 0; i1 < index; i1++){
			temp[i1] = vector[i1];
		}

		delete vector;
		vector = new int[index];
		for (int i2 = 0; i2 < index; i2++){
			vector[i2] = temp[i2]; //could call push_back(temp[i2]) making vectorSize and Pointer in this instance redundant
			vectorSize++;
			pointer++;
		}
		vectorSize = index;
		pointer = index;
	}
	else {
		for (int i3 = pointer; i3 < index; i3++){
			vector[i3] = 0;
			vectorSize++;
			pointer++;
		}
	}

	delete temp;
	return 0;
}