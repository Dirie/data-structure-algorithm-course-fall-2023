// C++ program for implementation
// of selection sort

#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// A function to implement selection sort
void selectionSort(int arr[], int n)
{
    int i, j, k;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in
        // unsorted array
        k = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[k])
                k = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (k != i)
            swap(arr[k], arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 4,1,3,2,-2};
	int N = sizeof(arr) / sizeof(arr[0]);
	selectionSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}
