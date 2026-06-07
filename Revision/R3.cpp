//Functions related problems - practice
#include<iostream>
using namespace std;

//Function definition
// void print(){
//     cout<<"Hello \n";
// }

// int main(){
//     //function invoke or call
//      print();
//       print();
//        print();
//     return 0;
// }

//Ex.1 Min of 2 numbers

// int minNumber(int a, int b){ //parameters
//     if(a<b){
//         return a;
//     } else 
//     return b;
// }

// int main(){
//        cout <<"min = "<<minNumber(8,6) <<endl; //arguments
//        cout<<"min = "<<minNumber(2,9) ; //arguments

//     return 0;
// }

//Ex.2 sum of numbers 1 from n
// int main(){ 
//     int n;
//     cout<<"Enter the Number :" <<  " ";
//     cin>>n;
//   int sum=0;
//     for(int i=1; i<=n; i++){
//         sum = sum+i;
//     }
//     cout<<sum;

//     return 0;
// }

//or

// int sumF(int n){ //parameters
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//          sum =sum+i;     
//     }
//     return sum;
// };
// int main(){
//     cout <<"Total Sum : "<<sumF(3)<<endl;
//     cout <<"Total Sum : "<<sumF(4)<<endl;
//     cout <<"Total Sum : "<<sumF(5)<<endl;

//     return 0;
// }

//or

// int Sum(int n){
//     int sum =0;
//     int count =1;
//     while(count <=n ){
//         // sum = sum+count;
//         sum +=count;
//         count++;        
//     }
//     return sum;
// }
// int main(){
//       cout<<Sum(5);
//     return 0;
// }

//Ex.3 factorial

// int factF(int n){
//     int fact =1;

//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     cout <<"Factorial = " <<factF(5);
//     return 0;
// }

//Ex. 4 pass by value

// int Sum(int a, int b){
//     return a+b;
// }
// int main(){
//     int x=6, y=7;

//     cout << Sum(x, y);

//     return 0;
// }


// void changeX(int x){
//      x =2*x;
//     cout << x <<endl;
// }
// int main(){
//        int x=5;
//        changeX(x); //10
//        cout <<x <<endl; //5

//     return 0;
// }

//Ex.5 sum of digit numbers

// int sumDigit(int num){
//      int sumDigits =0;
//     while(num > 0){
//           int last= num%10; //3,2,1
//           num = num/10; //12,1,0 
//           sumDigits = sumDigits+last; //3+2+1
//     };
//    return sumDigits;
// }

// int main(){
//     cout <<"Sum of digit of a number =" <<sumDigit(752144) <<endl;
//     return 0;
// }

//Ex.6 calculate the nCr binomial function


// int factorial(int num){
//     int fact =1;
//     for(int i=1; i<=num; i++){
//         fact= fact*i;
//     }
//     return fact;
// }
//   int nCr(int n, int r){
    
//    int l= factorial(n);
//    int m= factorial(r);
//    int p= factorial(n-r);

//    int ncr = l/(m*p);
//      return ncr;
//   }

 
// int main(){
//     // cout<<factorial(5);
//     cout <<nCr(8,2);

//     return 0;
// }

//Ex.7 check numbers are prime or not

// bool PrimeN(int n){
//     for(int i=2; i<n; i++){
//         if(n%i !=0){
//             return true;
//         } else {
//            return false;
//         }
//     }
// }
// int main(){
//     cout <<PrimeN(7);
//     return 0;
// }

//Ex.8 print all prime numbers from 2 to n;

bool PrimeN(int n){
    for(int i=2; i<n; i++){
        if(n%i !=0){
            return true;
        } else {
           return false;
        }
    }
};

int main(){
    int n =20;
    for(int i=2; i<=n; i++){
        if(PrimeN(i))
        {
            cout << i <<" ";
        }
    }
    return 0;   
}

