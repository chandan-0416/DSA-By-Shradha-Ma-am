// Now I start Array Data Structure 🚀 !!
#include<iostream>
#include<climits>
#include<unordered_map>
#include<unordered_set>
using namespace std;

//Ex.1
// int main(){
// int marks[5] ={32, 44, 97, 89, 90};
// int size= 5;
// for(int i=0; i <size; i++){
//     cout <<marks[i] <<endl;
// }
//     return 0;
// }

//Ex.2
// int main(){
//     int size = 10;
//     int marks[size];

//     for(int i =0; i<size; i++){
//         cin>>marks[i];
//     }
//     for(int i=0; i<size; i++){
//         cout <<marks[i]<<endl;
//     }
//     return 0;
// }

//Ex.3
// int main(){
//     int num[6]={5, 6, -56, 29, 17, 7};
//     int size = 6;
//     int smallest = INT_MAX;  
//     for(int i=0; i <size; i++){
//         smallest = min(num[i], smallest);
//     }
//     cout<<"Smallest ="<< smallest<<endl;
//     return 0;
// }

//Ex.4
// int main(){
//     int num[]= {-10, 3 , 84, 34, 98, -10};
//     int size=6;
//     int largest = INT_MIN;
//     for(int i=0; i <size; i++){
//         largest = max(num[i], largest);
//     }
//     cout<< largest <<endl;
//     return 0;
// }

//OR - smallest and largest
// int main(){
//    int num[]={5,6,-56,29,17,7};
//    int size=6;
//    int smallest = INT_MAX;
//    int largest =INT_MIN;
//    for(int i=0; i<size; i++){
//       smallest=min(num[i],smallest);
//       largest =max(num[i],largest);
//    }
//    cout<<"smallest = " <<smallest << endl;
//     cout<<"largest = " <<largest << endl;
//    return 0;
// }

//OR - smallest
// int main(){
//     int num[] ={5,6,-56,29,17,7};
//     int size = 6;
//     int smallest = INT_MAX;
//     for(int i=0; i<size; i++){
//       if(num[i] < smallest){
//         smallest =num[i];
//       }
//     }
//      cout <<smallest<<endl;
//     return 0;
// }

//OR - largest
// int main(){
//     int num[] ={5,6,-56,29,17,7};
//     int size = 6;
//     int largest = INT_MIN;
//     for(int i=0; i<size; i++){
//         if(num[i] > largest){
//             largest = num[i];
//         }
//     }
//     cout <<"largest ="<<largest <<endl;
//     return 0;
// }

//Ex.5 Size Analysis
// int  main() {
//     int num[] = {5, 6, -56, 29, 17, 7};
//       cout <<sizeof(num) <<endl; //Total size in bytes == 24
//       cout<<sizeof(num[0]) <<endl; // size of one block in bytes= 4
//       int size = sizeof(num)/sizeof(num[0]); // size of block = 6
//        cout <<size;
// }

//EX.6 Index Analysis
//Examples.A - Index of largest value
// int main(){
//     int num[]={5,-39,4,67,87,-20};
//     int size = sizeof(num)/sizeof(num[0]); //6
//     int largest = INT_MIN;//
//     int LargestIndex = -1;//
//     for (int i=0; i<size; i++){
//         if(num[i] > largest) { //condition
//         largest = max(num[i], largest);
//         LargestIndex = i;
//         }
//     }
//     cout <<largest <<endl;
//     cout<<LargestIndex;  
//     return 0;
// }

//Example.B - Index of smallest value
// int main(){
//     int num[]={5,-39,4,67,-87,-20};
//     int size = sizeof(num)/sizeof(num[0]); //6
//     int smallest = INT_MAX;
//     int smallestIndex = -1;
//     for (int i=0; i<size; i++){
//         if(num[i] < smallest) {
//         smallest = min(num[i], smallest);
//         smallestIndex = i;
//         }
//     }
//     cout <<smallest <<endl;
//     cout<<smallestIndex<<endl;    
//     return 0;
// }

//Ex.7 - Pass by reference
// void changeX(int arr[], int size){
//     for(int i=0; i <size; i++){
//         arr[i] = 2*arr[i];
//     }
// }
// int main(){
//     int arr[]={1,2,3,4};//2,4,6,8
//     int size= sizeof(arr)/sizeof(arr[0]);
//     changeX(arr, size);
//     for(int i=0;i<size; i++){
//         cout <<arr[i] <<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//Ex.8 Linear Search 
// int LinearSearch(int arr[], int size, int target){
//       for(int i=0; i<size; i++){
//         if(arr[i] == target){
//             return i;
//         }
//       }
//       return -1;
// }
// int main(){
//     int arr[]={4, 2, 7, 8, 1, 2, 5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int target=8;
//     cout<<LinearSearch(arr, size, target)<<endl;
//     return 0;
// }

//Ex.9 Two Pointer Approach - reverse an Array
// void TwoPointerApproach(int arr[], int size){
//     int start=0, end=size-1;
//     while(start < end){
//           swap(arr[start], arr[end]);
//           start++, end--;
//     } 
// }
// int main(){
//     int arr[]={2, 3, 6, 10, 15};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     TwoPointerApproach(arr, size);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//Ex.10 Sum and Product of an Array
// int sumArray(int arr[], int size){
//       int sum=0;
//     for(int i=0; i<size; i++){
//          sum+=arr[i];
//     }
//     return sum;
// }
// int productArray(int arr[], int size){
//    int num=1;
//    for(int i=0; i<size; i++){
//      num*=arr[i];
//    }
//    return num;
// }

// int main(){
//     int arr[]={2, 4, 10, 5, 3};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"sum of array= "<<sumArray(arr, size)<<endl;
//     cout<<"product of array= "<<productArray(arr, size)<<endl;

//     return 0;
// }

//Ex.11 swap the max and min value in array
// int maxIndex(int arr[], int size){
//     int index =0;
//     for(int i=1; i<size; i++){// why i=0 , because I've already assumed the first element is the largest. 
//         if(arr[i] > arr[index]){
//             index =i;
//         }
//     }
//     return index;
// }
// int minIndex(int arr[], int size){
//        int index=0;
//       for(int i=1; i<size; i++){
//         if(arr[i]<arr[index]){
//             index=i;
//         }
//       }
//       return index;
// }

// int main(){
//     int arr[]={2, 12, 45, 16, 7};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     //To swap them, you need their indices, not just their values.
//     int maxIdx= maxIndex(arr, size);
//     int minIdx= minIndex(arr, size);
//     swap(arr[maxIdx], arr[minIdx]);
//     for(int i = 0; i<size; i++){
//         cout <<arr[i]<<" ";
//     }
//     return 0;
// }

//OR -----
//swap() works on array elements (or variables), not on values alone. By storing maxIndex and minIndex, you know the exact positions to swap:

// void swapMaxMin(int arr[], int size){
//     int maxIndex=0;
//     int minIndex=0;

//     for(int i=1; i<size; i++){
//         if(arr[i] > arr[maxIndex])
//         maxIndex =i;

//         if(arr[i] < arr[minIndex])
//         minIndex =i;
//     }
//     swap(arr[maxIndex], arr[minIndex]);
// }
// int main(){
//       int arr[]={2, 12, 45, 16, 7};
//       int size=sizeof(arr)/sizeof(arr[0]);
//       swapMaxMin(arr, size);
//       for(int i=0; i<size; i++){
//         cout <<arr[i]<<" ";
//       }
//       return 0;
// }

//Ex.12 WAF to print all the unique values in an arrya.
//Brute forec Approach
// void printUnique(int arr[], int size){ 
     
//     for(int i=0; i<size; i++){
//         int count =0;
//         for(int j=0; j<size; j++){
//         if(arr[i] ==arr[j]){
//             count++;
//         }
//         }
//         if(count == 1){
//             cout <<arr[i] <<" ";
//         }
//     }
// }

// int main(){ //O(n^2)
//    int  arr[]={1,2,4,2,1,6,8};//4,6,8
//    int  size=sizeof(arr)/sizeof(arr[0]);

//    printUnique(arr, size);

//    return 0;
// }

// OR - hash map (unordered_map) : Optimoze approach : TC = O(n)

// void printUnique(int arr[], int size){
//     unordered_map<int, int> count;

//     for(int i=0; i<size; i++){
//         count[arr[i]]++; //count[arr[i]] = count[arr[i]] + 1;
//     }

//     for(int i=0; i<size; i++){
//         if(count[arr[i]] == 1){
//             cout <<arr[i]<<" ";
//         }
//     }
// }
// int main(){//O(n)
//        int  arr[]={1,2,4,2,1,6,8};//4,6,8
//        int  size=sizeof(arr)/sizeof(arr[0]);
//        printUnique(arr, size);
//        return 0;
// }


//Ex.13 WAF to print intersection of Two Array
//Brute force approach : unique intersection
// void intersectionOfArray(int arr1[], int arr2[], int size1, int size2){
//     for(int i=0; i<size1; i++){
//         // Check if arr1[i] has already appeared before
//         bool isDuplicate = false;
//         for(int k=0; k<i; k++){
//             if(arr1[i] == arr1[k]){
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if(isDuplicate){
//             continue;
//         }
//         for(int j=0; j<size2; j++){
//             if(arr1[i] == arr2[j]){
//                 cout <<arr1[i]<<" ";
//                 break;//break terminates the nearest loop.
//             }
//         }
//     }
// }
// int main(){//O(size1*size2)
//     int arr1[]={1,3,4,1,8};
//     int size1=sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[]={1,4,5,4}; 
//     int size2=sizeof(arr2)/sizeof(arr2[0]);
//     intersectionOfArray(arr1, arr2, size1, size2);

//     return 0;
// }

//OR - Optimized Approach using unordered_set
// void intersectionOfArray(int arr1[], int arr2[], int size1, int size2){
//     unordered_set<int> s;
//     //store all elements of arr1
//     for(int i=0; i<size1; i++){
//         s.insert(arr1[i]);
//     }
//     //check each element of arr2
//     for(int i=0; i<size2; i++){
//         if(s.find(arr2[i]) != s.end()){//end() is a special iterator  means "The search failed" or "There is no valid element here."
//             cout <<arr2[i] <<" ";
//             //Remove duplicates
//             s.erase(arr2[i]);
//         }
//     }
// }
// int main(){//O(size1+size2)
//     int arr1[]={1,3,4,1,8};
//     int size1=sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[]={1,4,5,4}; 
//     int size2=sizeof(arr2)/sizeof(arr2[0]);
//     intersectionOfArray(arr1, arr2, size1, size2);
//     return 0;
// }