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
//  bool isArmstrong(int n){
//     int copyN =n;
//     int sumOfCubes =0;
//     while(n !=0){
//         int dig = n %10;
//         sumOfCubes += (dig*dig*dig);

//         n= n/10;
//     }
//     return sumOfCubes == copyN;

//  }

//  int main(){
//     int n=153;
//     if(isArmstrong(n)){
//         cout << "is an armstrong number\n";
//     } else {
//         cout << " NOT an armstrong number\n";
//     }
//     return 0;

//  }

//4. GCD || Euclid's Algorithm
// int gcd(int a, int b){
//     while(a>0 && b>0){
//         if(a>b){
//             a= a%b;
//         } else {
//             b=b%a;
//         }
//     }
//     if(a ==0) return b;
//     return a;
// }
// main(){
//     cout << gcd(20,28) << endl;
//     return 0;
// }

//5. GCD's Recursion code
// int gcdRec(int a, int b){
//     if(b == 0) return a;

//     return gcdRec(b, a%b);
// }


// main(){
//     cout << gcdRec(20,28) << endl;
//     return 0;
// }

// 6. LCM
// int gcdRec(int a, int b){
//     if(b == 0) return a;
// }
// int lcm(int a, int b){
//     int gcd = gcdRec(a,b);
//     return (a*b) / gcd;
// }
// int main(){
//     cout << lcm(20, 28) << endl;
//     return 0;
// }

//7. Reverse a Number
//Leetcode problem No. 7 : reverse Integer

//8. Palindrome Number
//Leetcode problem No. 9 : Palindrome Number

// 9. Modulo Arithmetics - Properties

//10. Power Exponentiation

