#include "./../Include/Common.h"

using namespace std;

// Prints a 1D array 
void print1DArray(int *arr, int n){

	for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void print1DArray(int *arr, int low, int high){

	for(int i = low; i <= high; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Swap position a with b in an array of integer numbers
void swap(int *numbers, int a, int b){
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
}