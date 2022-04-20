//============================================================================
// Name        : sort_lib.cpp
// Author      : Yuanlong Xiao
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
// A C++ program to demonstrate
// STL sort() using
// our own comparator
#include <bits/stdc++.h>
using namespace std;

// An interval has a start
// time and end time
struct Interval {
	int start, end;
};

// Compares two intervals
// according to starting times.
bool compareInterval(Interval i1, Interval i2)
{
	return (i1.start < i2.start);
}

typedef struct{
	int x=0, y=0, z=0;
} shape;

bool compareShape(shape i1, shape i2)
{
	return (i1.z < i2.z);
}

int main1()
{
	Interval arr[]
		= { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
	int n = sizeof(arr) / sizeof(arr[0]);

	// sort the intervals in increasing order of
	// start time
	sort(arr, arr + n, compareInterval);

	cout << "Intervals sorted by start time : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].start << "," << arr[i].end
			<< "] ";

	return 0;
}

int main()
{
	vector<shape> arr = {
			{1, 1, 3},
			{2, 1, 1},
			{2, 3, 6},
			{3, 5, 5}};

	int n = 4;
	//int n = sizeof(arr) / sizeof(arr[0]);
	cout << "n = " << n << endl;
	// sort the intervals in increasing order of
	// start time
	sort(arr.begin(), arr.end(), compareShape);

	//cout << "Intervals sorted by start time : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].x << "," << arr[i].y << "," << arr[i].z
			<< "] ";

	return 0;
}

