//Strings & Character Arrays in C++ 
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

// 1. string Input in the form of Character array
// int main() {
//     char str[100];

//     cout << "enter char array : ";
//     cin.getline(str, 100, '$');

//     cout << "output : " << str << endl;
//     return 0;
// }

// 2. String Output - for each loop
// int main(){
//     char str[12];
//     cout << "enter char array : ";
//     cin.getline(str, 12);

//     for(char ch : str){
//         cout << ch << " ";
//     }
//     cout << endl;
//     return 0;
// }

//3. char array - length
// int main(){
//     char str[]="chandan kushwaha";
//     int len = 0;

//     for(int i=0; i<str[i] != '\0'; i++){
//         len++;
//     }
//     cout << "length of strings: " << len << endl;
//     return 0;
// }

//4. Strings in C++
// int main(){
//     string str = "chandan kushwaha"; // dynamic => runtime resize
//     cout << str << endl;

//       str = " hello";
//       cout << str << endl;
//       return 0;
//}

//5. operations in Strings
// int main(){
//     string str1="chandan";
//     string str2="kushwaha";
//     string str4= "chandan";
//     string str3= str1 + str2; // concatenation

//     cout << str3 << endl;
//     cout << (str1 == str2) << endl; // compare == 
//     cout << (str1 == str4) << endl;
//     cout << (str1 < str2) << endl; // compare > , <

//     cout << str1.length() << endl; // length
//     return 0;
// }

//6. string input
// int main(){
//     string str;
//     getline(cin, str);
//     cout << "output : " << str << endl;
//     return 0;
// }

//7. loops on a string 
// int main(){
//     string str = "chandan kushwaha";

//     for(int i=0; i<str.length(); i++){ // iterator based loop
//         cout << str[i] << " ";
//     }
//     // OR 
//     // for(char ch : str){ // for each loop
//     //     cout << ch << " ";
//     // }
//     cout << endl;
//     return 0;
// }

//8. Reverse String - question 
int main(){
    string str = "chandan kushwaha";

    reverse(str.begin(), str.end()); // c++ STL - return iterators
    cout << str << endl;
    return 0;
}







