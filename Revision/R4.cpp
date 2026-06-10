#include<iostream>
using namespace std;

//Ex.1 
// main(){
//     int  ans = 0, pow = 1, decNum=6;
//     while(decNum >0){
//        int rem = decNum%2;
//          decNum = decNum/2;

//         ans += (rem * pow);
//         pow = pow * 10;          
//     }
//     cout << ans; 
//     return 0;
// }


// int decToBin(int decNum){
//     int ans = 0, pow = 1;
//     while(decNum > 0){   
//      int rem = decNum %2;
//         decNum /= 2;

//         ans +=(rem * pow);
//         pow *= 10;
//    }
//    return ans;
// }
// int main(){   
//     for(int i =1; i<=10 ; i++){
//         cout << decToBin(i)<<endl;
//     }
//   return 0;
// }

//Ex.2 Biwise Operators 

// int main(){
//     int a=6, b=10;
//     int c=10, d=2;
//     int e=10, f=1;

//     cout<<"Bitwise & : "<<(a & b)<<endl; //and opertor
//     cout<<"Bitwise | : "<<(a|b)<<endl;
//     cout<<"Bitwise ^ : "<<(a^b)<<endl;
//     cout<<"Bitwise << : "<<(c<<d)<<endl;
//     cout<<"Bitwise >> : "<<(e>>f)<<endl;
//     return 0;
// }

//Ex.3 figure out if number is power of 2

//a. solved by loops

// bool powerOfTwo(int n) {
//     if (n <= 0) {
//         return false;
//     }

//     while (n % 2 == 0) {
//         n = n / 2;
//     }
//     return n == 1; //T/F
// }

//b.solved by bits manipulation | Powers of 2 have exactly one 1 bit.

// bool powerOfTwo(int n) {
//     return n > 0 && (n & (n - 1)) == 0; // here we return boolean expression (T/F)
// }

//C. solved by  Another way using <<
bool powerOfTwo(int n) {
    if (n <= 0)
        return false;

    int x = 1;

    while (x < n) {
        x = x << 1; //x << 1 generates exactly this sequence that is  power of two.   
    }

    return x == n; // means if x is equal to n return 1(true) or if x != n return 0(false).
}
int main() {
    cout << powerOfTwo(0) << endl;   // 0
    cout << powerOfTwo(8) << endl;   // 1
    cout << powerOfTwo(6) << endl;   // 0

    return 0;
}




