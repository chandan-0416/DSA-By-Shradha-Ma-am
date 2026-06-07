// Pattern based Problems
#include<iostream>
using namespace std;

//Ex.1 Square Pattern - Numbers
// int main(){
//     int n=4;

//     for(int i=1; i<=n; i++){ //outer loop
//         for(int j=1; j<=n; j++){ //inner loop
//             cout <<j <<" ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex.2 Square Pattern - Characters "A to Z"
// int main(){ //wrong way 
//     int n=4;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n;j++){
//           cout<<"A B C D" <<endl;
//         }
//     }
//  return 0;
// }

//OR

// int main(){
//     char ch ='A';
//     int n = 4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cout << char(ch + j) << " ";  
              
//         } 
//         cout <<endl;
//     }
//     return 0;
// }

//OR

// int main(){
//     int n = 4;
//     for(int i=0; i<n; i++){
//           char ch = 'A'; // reset the value of ch
//         for(int j=0; j<n; j++){
//             cout << ch << " ";
//             ch++; //D
//         }
//         cout <<endl;
//     }

//     return 0;
// }

//Ex.3 Square Pattern - Asterisk "*"
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << "* * * *" <<endl;
//         }
//     }
//     return 0;
// }

//Ex.4 
// int main(){
//     int n=3, count =1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << count <<" ";
//               count++;
//         }
//         cout<<endl;
//      }
//     return 0;
// }

//Ex.5
// int main(){
//     int n = 3;
//     char ch ='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << ch <<" ";
//                ch++;
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex.6 Triangle Patterns - Asterisk
// int main(){
//     int n = 4;
//     char Ast = '*'; // character with single qoute
//     for(int i = 0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << Ast << " ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex.7 Triangle Patterns - Numbers
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout <<i+1 <<" ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex.8 Triangle Patterns - Characters
// int main(){
//     int n=5;
//     char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout <<char(ch + i) <<" ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex.9 
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout <<j+1<<" ";    
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Ex.10 Reverse Triangle Pattern
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<j << " ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Backward loop
// int main(){
//     int n=5;
//     for(int i=n; i>0; i--){
//         cout<<i <<endl;
//     }
//     return 0;
// }

//Ex.11 Floyd's Triangle Pattern
// int main(){
//     int n=4, count=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout <<count <<" ";
//             count++;
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//OR with backward lopp
// int main(){
//     int n=4, count = 1;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<count <<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Ex.12 
// int main(){
//     int n=4;
//        char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout << char(ch) <<" ";
//             ch++;
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex. 13
// int main(){
//     int n=4;
//        char ch = 'A';
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout << char(ch+j-1) <<" ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex.14 Inverted Triangle Pattern
// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout <<" ";
//         }
//         for(int j=0; j<n-i ; j++){
//             cout <<i+1 ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Ex.15 
// int main(){
//     int n =4;
//     char ch ='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout <<" ";
//         }
//         for(int j=0; j<n-i; j++){
//             cout <<char(ch+i) ;
//         }
//         cout <<endl;

//     }
//     return 0;
// }

//Ex.16 Pyramid Pattern
// int main(){
//     int n=4;
    
//     for(int i=0; i<n; i++){
//         //space
//         for(int j=0; j<n-i-1; j++){
//             cout <<" ";
//         }
//         //Triangle-1
//         for(int j=0; j<i+1; j++){
//             cout <<j+1;
//         }
//        // Triangle-2
//       for(int j=i; j>0; j--){
//         cout <<j;
//       }
//         cout <<endl;
//     }
//     return 0;
// }

//Ex.17 Hollow Diagram Pattern
// int main(){
//     int n=4;
//     //Top part of Hollow
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout <<" ";
//         }
//         cout<<"*";
        
//         for(int j=0; j<2*i-1; j++){
//             cout <<" ";
//         }
//         if(i!=0){
//             cout <<"*";
//         }

//         cout<<endl;
//     }
//      //Bottom part pf Hollow
//      for(int i=0; i<n-1; i++){
//         for( int j=0; j<i+1; j++){
//             cout<<" ";
//         }
//         cout <<"*";
//         for(int j=0; j<(2*(n-2-i)-1); j++){
//               cout<<" ";
//         }
//         if(i!=n-2){
//              cout<<"*";
//         }
//         cout<<endl;
//      }

//     return 0;
// }

//Ex.18 Butterfly Pattern
int main(){
    int n=4;
    //Top part of butterfly diagram
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<2*(n-i)-2; j++){
            cout <<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    //Bottom part of butterfly diagram
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*i; j++){
              cout<<" ";   
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}