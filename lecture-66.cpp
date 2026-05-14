// Stack Data Structure
#include<iostream>
#include<stack>
#include<vector>
#include<list>
using namespace std;

//1. Stack using Arrays/Vector

// class Stack {
//     vector<int> v;
//     public:
    
//     void push(int val) { // O(1)
//          v.push_back(val);
//     }

//     void pop() { // O(1)
//       v.pop_back();
//     }

//     int top(){ // O(1)
//       return v[v.size()-1];
//     }

//     bool empty(){
//         return v.size() == 0;
//     }
// };

// int main(){

//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//      while(!s.empty()){
//         cout << s.top() << " ";
//         s.pop();
//      }
//      cout << endl; // 30 20 10
//     return 0;
// }

//2. Stack using Linked List

// class Stack {
//    list<int> ll;
//     public:
    
//     void push(int val) { // O(1)
//          ll.push_front(val);
//     }

//     void pop() { // O(1)
//     ll.pop_front();
//     }

//     int top(){ // O(1)
//       return ll.front();
//     }

//     bool empty(){
//         return ll.size() == 0;
//     }
// };

// int main(){

//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);

//      while(!s.empty()){
//         cout << s.top() << " ";
//         s.pop();
//      }
//      cout << endl; // 30 20 10
//     return 0;
// }

//3. Stack using C++ STL

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

     while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
     }
     cout << endl; // 30 20 10
    return 0;
}