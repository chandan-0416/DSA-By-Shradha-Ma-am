#include<iostream>
#include<vector>
using namespace std;

//1. (Add print)
// int main(){
//     int a=10;
//     cout<< &a<<endl;
//     return 0;
// }

//2. (Address store)
int main(){
    int a=10;
    int* ptr= &a;
    int** parPtr=&ptr;
    
    cout<< &a<<endl;
    cout<<ptr<<endl;
    cout<< &ptr<<endl; // show Address
    cout<< parPtr<<endl; // store Address
    cout<< *(&a)<<endl;  // value at Address 
    cout<<*(ptr)<<endl;
    cout<< *(parPtr)<<endl;
    cout<< **(parPtr)<<endl;
    return 0;
}