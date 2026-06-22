// Now I start Array Data Structure 🚀 !!
#include<iostream>
#include<climits>
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