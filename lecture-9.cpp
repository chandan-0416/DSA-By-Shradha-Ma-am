#include <iostream>
#include <vector> // stl container
using namespace std;

//1. creation vector 
// int main(){
//     vector<int> vec(5,0);
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;
//     cout<<vec[3]<<endl;
//     cout<<vec[4]<<endl;
//     return 0;
// }

//2. for each loop

// int main(){
//     vector<char> vec={'a','b','c','d','e'};
//     for(char val : vec){
//         cout<< val<<endl;
//     }
//     return 0;
// }

//3. Vector Function - size, push_back, pop_back, front, back, at

  // int main(){
  //   vector<int> vec;
  //   cout<< "size = "<<vec.size()<<endl;
  //   vec.push_back(12);
  //   vec.push_back(15);
  //   vec.push_back(30);
    
  //   cout<<"after push back size = "<<vec.size()<<endl;
  //     vec.pop_back();
  //    cout<< "First val = "<<vec.front()<<endl;
  //   for( int val: vec){
  //       cout<<val<<endl;
  //   }
  //    cout<< "Last val = "<<vec.back()<<endl;
  //    cout<<vec.at(0)<<endl;
  //    return 0;
  // }

//4. Static Vs Dynamic Allocation

// int main(){
//   vector<int> vec;

//   vec.push_back(0);
//   vec.push_back(1);
//   vec.push_back(2);

//   cout<<"Size = "<<vec.size()<<endl;
//   cout<<"Capacity = "<<vec.capacity()<<endl;

//   return 0;
// }

//5. Problem : Single Element


