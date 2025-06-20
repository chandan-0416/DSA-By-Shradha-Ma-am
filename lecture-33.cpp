//Maths for DSA
#include<iostream>
#include <cmath>
using namespace std;

//1. Prime Numbers
// string isPrime(int n){
//     for(int i=2; i*i <= n ; i++){
//         if(n % 2 == 0){
//             return "Non Prime";
//         }
//     }
//     return "Prime";
// }
// int main(){
//     int n=42;
     
//     cout << isPrime(n) <<endl;
//     return 0;
// }

//2. Digits in a Number
// void printDigit(int n){
//     int count = 0;
//     int sum = 0;

//      while(n != 0){ // TC : O(log (base 10)  n)
//         int digit = n % 10;
//         count++;
//         sum += digit;
//         cout << digit <<endl;
//         n = n /10; // find next digit 
//      }
//      cout << "sum of digits : " << sum << endl;
//      cout << "Count of digits : " << count <<endl;
// }

// int main(){
//     int n=3568;
//     printDigit(n);
//     cout << (int)(log10(n) + 1) << endl; // shortcut to find count of digit in Number
//     return 0;

// }

//3. Armstrong Number

