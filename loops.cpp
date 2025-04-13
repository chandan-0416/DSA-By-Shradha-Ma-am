#include<iostream>
using namespace std;

//Eg.1(While-loop)

// int main(){
//   int n=50;
//   int i=1;
//   while (i <=n)
//   {
//     cout<<i<<" ";
//     i++;
//   }
//     return 0;
// }

//Eg2.(for-loop)

// int main(){
//   //int i;
//   int n=5;
//   for (int i = 1; i <= n; i++)
//   {
//     cout<<i<<" ";

//   }
//   cout <<endl;
//   return 0;
// }

//Eg.3

// int  main()
// {
//   int n=50;
//   int sum=0;
//   for (int i=1; i <=n; i++)
//   {
//     sum+=i;
//     if (i==5)
//     {
//      break;
//     }
    
//   }
//   cout << "sum= "<<sum;
//   return 0;
// }

//Eg.4

// int main(){
//     int n=10;
//     int oddSum=0;
// for (int i = 1; i <=n; i++)
// {
//   if (i%2!=0)
//   {
//    oddSum+=i;
//   }
  
// }
// cout<<"oddSum= "<<oddSum;
//  return 0;
// }

//Eg.5(do-while loop)

// int main(){
//    int n=10;
//    int i=1;
//    do
//    {
//     cout<<i<<" ";
//     i++;
//    } while (i<=10);
//    cout<<endl;

//   return 0;
// }

//Eg.6-----> problems

// int main(){
//   int n=2;
//   bool isPrime=true;

//   for (int  i = 2; i <=n-1 ; i++)
//   {
//     if (n%i==0) //non prime
//     {
//       isPrime=false;
//       break;
//     }
    
//   }
//   if (isPrime==true)
//   {
//   cout<<"prime no\n";
//   }else{
//     cout<<"non prime no \n";
//   }
// return 0;
  
// }

//OR

// int main(){
//   int n=79;
//   bool isPrime=true;

//   for (int  i = 2; i*i <=n ; i++)
//   {
//     if (n%i==0) //non prime
//     {
//       isPrime=false;
//       break;
//     }
    
//   }
//   if (isPrime==true)
//   {
//   cout<<"prime no\n";
//   }else{
//     cout<<"non prime no \n";
//   }
// return 0;
  
// }

//Eg.7(Nested Loop)

// int main(){
// int n=10;
// for (int i=1; i<=n; i++)
// {
//   int m=10;
//   for (int j=1; j<=m; j++)
//   {
//    cout << "*"<<" ";
//   }
//   cout<<endl;
// }
// return 0;
// }