#include<iostream>
//#include <climits>
using namespace std;

//1. Output
// int main(){
//     int marks[5]={32,44,97,89,90};
//     int size=5;

//     //loops : 0 to size-1

//     for( int i=0; i<size; i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }
//2.  Input

// int main(){
//     int size =5;
//     int marks[size];
//     for (int i = 0; i < size; i++)
//     {
//        cin>>marks[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//        cout<<marks[i]<<endl;
//     }
//     return 0;
// }

//3. Find smallest / largest in Array

// int main(){
//    int num[]={5,6,-56,29,17,7};
//    int size=6;

//    int smallest = INT_MAX;
//    int largest =INT_MIN;
//    for(int i=0; i<size; i++){
//    // smallest=min(num[i],smallest);
//       largest =max(num[i],largest);

//       if(num[i]<smallest){
//          smallest=num[i];
//       }
//    }
//    cout<<"smallest = " <<smallest << endl;
//     cout<<"largest = " <<largest << endl;
//    return 0;
// }

//4. Pass by reference

// void changeArr(int arr[],int size){
//    cout<<"in function\n";
//    for(int i=0; i<size;i++){
//       arr[i]=2* arr[i];
//    }
// }
// int main(){
//    int arr[]={1,2,3};

//    changeArr(arr,3);
//    cout<<"in main\n";
//     for(int i=0; i<3;i++){ //2 4 6
//       cout<<arr[i]<<" ";
//    }
//    cout<< endl;
//    return 0;
   
// }

//5. Linear search

//  int linearSearch(int arr[], int sz, int target){
//    for( int i=0; i<sz; i++){
//       if(arr[i]==target){//found
//       return i;
//       }
//    }
//    return -1;//NOT FOUND
//  }

// int main(){
//    int arr[]={4,3,7,8,1,2,5};
//    int sz=7;
//    int target=8;
//    cout<<linearSearch(arr,sz,target)<<endl;
//    return 0;
// }

//6. Reverse on array
//logic

void reverseArray(int arr[],int sz){
   int start = 0, end = sz-1;
   while (start<end)
   {
      swap(arr[start], arr[end]);
      start++;
      end--;
      
   } 
}
int main(){
   int arr[]={1,2,3,4,5};
   int sz=5;
   //call
   reverseArray(arr, sz);

   for(int i=0; i<sz; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   return 0;
}

