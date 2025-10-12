// Recursion Concepts , Part-1
#include<iostream>
using namespace std;

// Eg.1 : Print Numbers n

// void printNums(int n){ //recursive function
//      if(n == 1){
//         cout << "1\n";
//         return;
//      }

//      cout << n << " ";
//      printNums(n-1);
// }

// int main(){
//     printNums(50);
//     return 0;
// }

// Eg.2 :  N Factorial

// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// int main(){
//     cout << factorial(5) << endl;
//     return 0;
// }

// Eg.3 : Sum of N nums with recursion
    
    int sum(int n){ // n=4
        if( n == 1){
            return 1;
        }
        return n + sum(n-1);
    }

    int main(){
        cout << sum(4) << endl; 
        return 0;
    }
