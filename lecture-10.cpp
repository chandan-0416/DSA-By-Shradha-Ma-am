#include <iostream>
#include <climits>
#include<vector>
using namespace std;

//1. Print Subarray

// int main(){
// int n=5;
// int arr[5]={1,2,3,4,5};
// for(int st=0; st<n; st++){ // loop for start to n-1
//    for( int end=st; end<n; end++){ // loop for end 
//     for( int i=st; i<=end; i++){  // print elemet
//         cout<<arr[i];
//     }
//     cout<<" ";
//    }
//    cout<<endl;
// }
// return 0;
// }
 
//2.  Maximum SubArray Sum using Brute force approach

// int main() {
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     int maxSum= INT_MIN;

//     for(int st=0; st<n; st++){
//         int currSum=0;
//         for(int end=st; end<n; end++){
//             currSum+=arr[end];
//             maxSum=max(currSum, maxSum);
//         }
//     }
//     cout<<"max subArray sum = "<<maxSum<<endl;
//     return 0;
// }

//3. Maximum SubArray Sum using Kadane's Algorithm
  // LEETCODE -53


