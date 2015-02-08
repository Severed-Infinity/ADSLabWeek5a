#include "ITIntVector.h"
#include <iostream>
using namespace std;

int main(){
	ITIntVector vector = ITIntVector::ITIntVector(10);
	vector.push_back(5);
	vector.push_back(10);
	vector.push_back(15);
	vector.push_back(20);
	vector.push_back(25);

	cout << "Size: " << vector.size()<< endl;

	for (int i = 0; i < vector.size(); i++){
		cout << "index" << i << " " << vector.at(i) << " ";
	}
	cout << endl;

	vector.resize(7);
	vector.push_back(30);

	cout << "Size: " << vector.size() << endl;

	for (int i = 0; i < vector.size(); i++){
		cout << "index" << i << " "<< vector.at(i) << " ";
	}
	cout << endl;

	vector.resize(3);

	cout << "Size: " << vector.size() << endl;

	for (int i = 0; i < vector.size(); i++){
		cout << "index" << i << " " << vector.at(i) << " ";
	}
	cout << endl;

	//bounds checking
	vector.at(19);
	vector.at(-5);

	//changing of a value at given index using at
	vector.at(7) = 35;
	//accessing the data of a given index using at
	cout << vector.at(7);

	system("pause");
	return 0;
}