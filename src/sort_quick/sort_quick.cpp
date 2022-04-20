//============================================================================
// Name        : sort_quick.cpp
// Author      : Yuanlong Xiao
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int divide(int arr[], int start, int end){
	int pivot = arr[end];
	int index = start;

	for(int i=start; i<end; i++){
		if(arr[i] < pivot){
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
			index++;
		}
	}

	int temp = arr[end];
	arr[end] = arr[index];
	arr[index] = temp;

	return index;
}

void Quick(int arr[], int start, int end){
	if(start<end){
		int d= divide(arr, start , end);
		Quick(arr, start, (d-1));
		Quick(arr, (d+1), end);
	}
}

int main() {
	int i;
	int arr[8] = {12, 3, 1, 5, 18, 10, 7, 35};
	cout << "Unsorted array: \n";
	for(i=0; i<8; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	Quick(arr, 0, 7);
	cout << "Sorted Elements ... \n";
	for(i=0; i<8; i++){
		cout << arr[i] << "\t";
	}
	return 0;
}
