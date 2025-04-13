#include<iostream>
using namespace std;


// Eg.1(Patterns Type Problems)

// int main(){
//   int n=4;
//   for (int i = 1; i<=n; i++) //outer loop
//   {
//     for (int j=1; j<=n; j++)//inner loop
//     {
//         cout<< j <<" ";
//     }
//      cout << endl;
//   }

//    return 0;
// }

// Eg.2

// int main(){
//     int n=4;
//     for (int i = 1; i<=n; i++) //outer loop
//     {
//       for (int j=1; j<=n; j++)//inner loop
//       {
//           cout<< "*" <<" ";
//       }
//        cout << endl;
//     }
  
//      return 0;
//   }

// Eg.3
 
// int main(){

//      int n=4;

//      for (int i = 0; i < n; i++) //outer loop
//      {
//          char ch='A';
//         for (int j = 0; j < n; j++)//inner loop => line start
//         {
//          cout<< ch<<" ";
//          ch=ch+1;  
//         }
//         cout<<endl;
//         }
//       return 0;
// }

// Eg.4

// int main(){

//     int n=3;
//     int num=1;

// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//        cout<<num<<" ";
//        num++;
//     }
//  cout<<endl;   
// }
// cout <<"after patter : "<< num<<endl; //10
// return 0;
// }

// Eg.5(Trianle Pattern)

// int main(){
//     int n = 4;

//    for(int i=0; i<n; i++) // n
//    {
//     for(int j=0; j<i+1; j++)
//      //i+1
//     {
//        cout<<"*" <<" ";
//     }
//     cout<< endl;
//    }
//  return 0;
// }
 

 // Eg.6

//  int main(){
//     int n=4;
//     for(int i=0; i<n; i++ ){
//      for(int j=0; j<i+1; j++){
//         cout<<i+1<<" ";
//      }
//      cout<<endl;
//     }
//     return 0;
//  }

//Eg.7

// int main(){
//     int n=5;
//     for (int i = 0; i < n; i++)
//     {
//       for (int j = 1; j < i+1; j++)
//       {
//         cout<<j<<" ";
//       }
//       cout<<endl;
//     }
//   return 0;  
// }

//Eg.8(Reverse Triangle Pattern)

// int main(){
//     int n=4;
//      for (int i=0; i < n; i++)
//      {
//        for (int j =i+1; j>0; j--)
//        {
//         cout<<j<<" ";
//        }
//         cout<<endl;
//      }
// return 0;
// }

//Eg.8(Floyd's Triangl Pattern)

// int main(){
//    int n=4;

//    int num=1;
//    for (int i = 0; i < n; i++)
//    {
//     for (int j = 0; j< i+1 ; j++)
//     {
//     cout<<num<<" ";
//     num++;
//     }
//     cout<<endl;
//   }
//     return 0;
// }  

//Eg.9(Inverted Triangle Pattern)

// int main(){
//   int n=4;
//     for(int i=0; i<n; i++){
//         //spaces
//         for (int j = 0; j<i; j++)
//         {
//          cout<<" ";
//         }
//         //nums
//        for (int j= 0; j <n-i; j++)
//      {
//        cout<<(i+1);
//      }
//       cout<<endl;  
//     }
// return 0;
// }

//Eg.10(Pyramid Pattern-Nested loop)

// int main(){
//    int n=4;
//    for (int i = 0; i < n; i++)
//    {
//     //spaces : n-i-1
//      for (int j = 0; j< n-i-1; j++)
//      {
//         cout<<" ";
//      }
//     //num1
//     for(int j=1; j<=i+1; j++){
//         cout<<j;
//     }
//     //num2
//   for (int j= i; j >0; j--)
//   {
//      cout <<j;
//   }
//   cout<<endl;

//    }
// return 0;
// }

//Eg.11(Hollow Diamond Pattern)

// int main(){
//    int n=4;
// //top
// for (int i = 0; i < n; i++)
// {
//    //spaces
//   for (int j = 0; j < n-i-1; j++)
//   {
//     cout<<" ";
//   }
//   cout<<"*";

//   if(i !=0){
//     //spaces
//     for (int j = 0; j < 2*i-1; j++)
//   {
//     cout<<" ";
//   }
//   cout<<"*";
//   }
//   cout<<endl;
// }
//   //bottom
//   for (int i = 0; i < n-1; i++) //0 to n-2
//   {
//     //spaces
//     for (int j = 0; j <i+1; j++)
//   {
//     cout<<" ";
//   }
//   cout<<"*";
//   if(i !=n-2){
//     //spaces
//     for (int j = 0; j<2*(n-i)-5; j++)
//     {
//       cout<<" ";
//     }
//     cout<<"*";
//   }
//  cout<<endl;

//   }
// return 0;
// }