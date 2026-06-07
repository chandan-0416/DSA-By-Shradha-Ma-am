// loops related problems
#include<iostream>
using namespace std;

//Ex.1 print n numbers and total sum using while loop

// int main(){
//   int i=1, sum=0, n=10;
//   while(i <= n){
//     cout << i <<endl; //1 2
//      sum = sum+i; //1+2
//       i++;
//   }   
//    cout << "Total Sum : " <<sum <<endl;
//   return 0;
// }

//Ex.2 print n numbers and their total sum using for-loop

// int main(){
//       int n=10, sum = 0;
//       for(int i=1; i<=n; i++){         
//         cout<< i << " ";
//         cout<< endl;
//         sum = sum+i; 
//       }
//       cout << sum <<endl;   
//     return 0;
// }

//Ex.3 Print odd Numbers and total sum using for loop

// int main(){
//   int n=10, sum = 0;
//   for(int i=1; i<=n; i++){
//     if(i%2 !=0){
//       cout << i <<endl;
//       sum = sum + i;
//     }
//   }
//   cout <<sum ;
//   return 0;
// }

// Ex.4 print odd numbers and total sum using while loop

// int main(){
//        int i=1, n = 10, sum = 0;
//       while(i <= n){
//         if(i % 2 != 0){
//         cout << i <<endl;
//          sum += i;
//         }
//         i++;
//       }
//       cout << sum ;
//   return 0;
// }

// Ex.4 print even numbers and total sum using while loop
// int main(){
//   int n = 10, i = 1, sum = 0 ;
//   while(i <= n){
//     if( i % 2 == 0){
//       cout <<i <<endl;
//       sum = sum + i;
//     }
//     i++;
//   }
//   cout << "Sum of Even Numbers : " << sum;
//   return 0;
// }

// Ex.5 print even numbers and total sum using for loop
// int main(){
//    int sum = 0;

//   for(int i=1; i<=10; i++){
//     if(i%2 == 0){
//       cout << i <<endl;
//       sum = sum+i;
//     } 
//   }
//   cout<< "sum of even numbers : " << sum;
//   return 0;
// }

//Ex.6 Print numbers from 1 to 10 using do-while loop
// int main(){
//   int n=10, i=1;
//   do{
//     cout << i <<endl;
//      i++;

//   } while( i <=n);

//   return 0;
// }

//Ex.7 Check the numbers are prime or not 
// int main(){
//      int n =71;
//      bool isPrime = true;
//   for( int i=2 ; i < n ; i++){
//     if(n % i == 0){
//       isPrime = false;
//     }
//   }
//   cout <<isPrime <<endl;
//   return 0;
// }

//Ex.8 sum of all numbers from 1 to n which are divisible by 3.
// int main(){
//   int n = 100 , sum = 0;
//   for(int i=1; i<=n; i++){
//      if(i%3 == 0){
//        sum= sum+i;
//      }
//   }
//   cout <<sum;
// }

//Ex.9 print factotrial of a number N.
int main(){
  int n = 10 ;
  long long fact= 1;
  for(int i=1; i<=n; ++i){
      fact = fact * i;
  }
  cout << n <<" = "<< fact <<endl;
 
  return 0;
}