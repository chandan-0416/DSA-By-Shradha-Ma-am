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
// int main(){
//     int a=10;
//     int* ptr= &a;
//     int** parPtr=&ptr;
    
//     cout<< &a<<endl;
//     cout<<ptr<<endl;
//     cout<< &ptr<<endl; // show Address
//     cout<< parPtr<<endl; // store Address
//     cout<< *(&a)<<endl;  // value at Address 
//     cout<<*(ptr)<<endl;
//     cout<< *(parPtr)<<endl;
//     cout<< **(parPtr)<<endl;
//     return 0;
// }

//3. NULL Pointer

// int main(){
// // int** ptr;
//     int** ptr=NULL;

//     cout<<ptr<<endl;
//     return 0;
// }

//4. Pass by referenec using pointers

// void changeA(int* ptr){
//     *ptr=20;
// }
// int main(){
//     int a=10;
//     changeA(&a);
//     cout<<"inside main fxn : "<<a<<endl;
//     return 0;
// }

//5.  Pass by referenec using alias
// void changeA(int &b){
//     b=20;
// }
// int main(){
//     int a=10;
//     changeA(a);
//     cout<<"inside main fxn : "<<a<<endl;
//     return 0;
// }

//6. Pointer Arithmetic
// int main(){
//     int arr[]={1,2,3,4,5};
//     int a=10;
//     int* ptr=&a;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl; //+4
//     return 0;
// }

//7. ques
// int main(){
//     int arr[]={10,20,30,40};
//     int* ptr=arr;
//     cout<<*(ptr +1)<<endl;
//     cout<<*(ptr +3)<<endl;
//     ptr++;
//     cout<<*ptr<<endl;
//     return 0;
// }