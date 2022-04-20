//============================================================================
// Name        : sort_insertion.cpp
// Author      : Yuanlong Xiao
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int i, j, tmp, k;
	int arr[8] = {12, 3, 1, 5, 18, 10, 7, 35};
	cout << "Unsorted array: \n";
	for(i=0; i<8; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	for(i=1; i<8; i++){
		for(j=0; j<i; j++){
			if(arr[i] < arr[j]){
				tmp = arr[i];
				for(k=i-1; k>=j; k--){
					arr[k+1] = arr[k];
				}
				arr[j] = tmp;
				break;
			}
		}
	}

	cout << "Sorted Elements ... \n";
	for(i=0; i<8; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
}
