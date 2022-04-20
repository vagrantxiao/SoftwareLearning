//============================================================================
// Name        : sort_bubble.cpp
// Author      : Yuanlong Xiao
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i, j, tmp;
	int arr[8] = {12, 3, 1, 5, 18, 10, 7, 35};
	cout << "Unsorted array: \n";
	for(i=0; i<8; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	for(i=0; i<7; i++){
		for(j=0; j<7-i; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	cout << "Sorted Elements ... \n";
	for(i=0; i<8; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
}
