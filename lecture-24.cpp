#include<iostream>
#include<vector>
using namespace std;

//1. Sorting Algorithms - Bubble Sort

// void bubbleSort(int arr[], int n){ // O(n^2)
//    for(int i=0; i<n-1; i++){
//       bool isSwap = false;

//     for(int j=0; j<n-i-1; j++){
//         if(arr[j] > arr[j+1]){
//             swap(arr[j], arr[j+1]);
//             isSwap= true;
//         }
//     }
      
//     if(!isSwap){// array is already sorted
//         return;
//     }
//    }
// }

//  void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//  }
//  int main(){
//     int n=5;
//     int arr[]= {4, 1, 5, 2, 3};

//     bubbleSort(arr, n);
//     printArray(arr, n);
//     return 0;

//  }

 //2. Sorting Algorithms - Selection Sort

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout <<arr[i] << " ";
//     }
//     cout << endl;
// }

//  void selectionSort(int arr[], int n){
//     for(int i=0; i<n-1; i++){
//         int smallestIdx = i; // unsorted part starting
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[smallestIdx]){
//                 smallestIdx =j;
//             }
//         }
//         swap(arr[i], arr[smallestIdx]);
//     }
//  }

//  int main(){
//     int n=5;
//     int arr[]= {4, 1, 5, 2, 3};
//     selectionSort(arr, n);
//     printArray(arr, n);
//     return 0;
//  }

//3. Sorting Algorithms - Insertion Sort

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout <<arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n){

    for(int i=0; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr; // placing the curr el in its corrent position
    }
}

int main(){
    int n=5;
    int arr[]= {4, 1, 5, 2, 3};

    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}


 

