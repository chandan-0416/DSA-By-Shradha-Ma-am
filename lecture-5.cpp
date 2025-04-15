#include<iostream>
using namespace std;

// //Eg.1

// // function definition
// void printHello(){
//     cout<<"hello world\n";
// }
// main(){
// // function call / invoke
// printHello();
// return 0;
// }

//Eg.2

// // function definition
// int printHello(){
//     cout<<"hello world\n";
//     return 3;
// }
// main(){
// // function call / invoke
// /*int val=printHello();
// cout<<"val = "<< val<<endl; */
// cout<<printHello()<<endl;

// return 0;
// }

//Eg.3

// sum 0f two number

// int sum(int a, int b){  // parameters
//     int s=a+b;
//     return s;
// }
// // min of two number
// int minOfTwo(int a, int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }

// int main(){
// cout<<sum(10,5)<<endl;
// cout<<"min = "<< minOfTwo(15,6)<<endl; // arguments
// return 0;
// }

//Eg.4

// int sumN(int n){
//     int sum =0;
//     for (int i = 1; i <=n; i++)
//     {
//         sum+=i;
//     }
//     return sum;   
// }
// int main(){
//  cout<<sumN(5)<<endl;
//  cout<<sumN(10)<<endl;
// return 0;
// }  

//Eg.5 - factorial

// int factorialN( int n){
//     int fact=1;
//     for(int i=1; i<=n;i++ ){
//         fact *=i;
//     }
//     return fact;
// }
// int main(){
//     cout<<"fact= "<<factorialN(5)<<endl;
//     cout<<"fact= "<<factorialN(3)<<endl;
//    return 0;
// } 

//Eg.6(Pass by value)

// int sum(int a, int b){
//     a=a+10;
//     b=b+10;
//     return a+b;
// }

// int main(){
//    int a=4, b=5;
// cout<< sum(a, b)<<endl;
// cout<<a<<endl; // No change in main()
// cout<<b<<endl;
//     return 0;
// }

//Eg.7

// void changeX(int x){
//    x=2*x;
//    cout<<"x= "<<x<<endl;
// }
// int main(){
//    int x=5;
//    changeX(x);
//    cout<<"x= "<<x<<endl;
//     return 0;
// }

//Eg.8 - cal sum of digits of a number

// int sumOfDigit(int num){
//     int digSum=0;

//     while (num>0)
//     {
//         int lastDig=num%10;
//         num /=10;
//         digSum +=lastDig;
//     }
//     return digSum;   
// }
// int main(){
//   cout<<"sum= "<< sumOfDigit(2356)<<endl;

//     return 0;
// }

//Eg.9 - cal nCr binomial coefficient for n and r.

// int factorial(int n){
//     int fact=1;
//     for (int i = 1; i <=n; i++)
//     {
//        fact*=i;
//     }
//     return fact;  
// }
// int nCr(int n, int r){
//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nmr=factorial(n-r);
//     return fact_n /(fact_r * fact_nmr);
// }
// int main(){
//     int n=8, r=2;
//     cout<<nCr(n,r)<<endl;
//     return 0;
// }
