// Queue Data Structure
#include <iostream>
#include <queue>
#include <deque>
#include <vector>
using namespace std;

// using Linked List
// class Node {
//     public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class Queue {
//     Node* head;
//     Node* tail;

//     public:
//     Queue() {
//         head = tail = NULL;

//     }

//     void push( int data) { //insert data at tail, O(1)
//          Node* newNode = new Node(data);

//          if(empty()){
//             head = tail = newNode;
//          } else {
//             tail->next = newNode;
//              tail = newNode; // assign the value to the newNode
//          }
//     }

//     void pop(){ //O(1)
//        if(empty()){
//         cout << "LL is EMPTY\n";
//         return ;
//        }

//        Node* temp = head;
//        head = head->next;
//        delete temp;
//     }

//     int front() { //O(1)
//          if(empty()){
//         cout << "LL is EMPTY\n";
//         return -1 ;
//        }
//         return head->data;
//     }

//     bool empty(){//O(1)
//         return head == NULL;
//     }
// };

// int main(){
//     Queue q;

//     q.push(1);
//     q.push(2);
//     q.push(3); //1,2,3

//     while(!q.empty()){
//         cout << q.front() <<" ";
//         q.pop();
//     }

//     cout << endl;
//     return 0;
// }

// using C++ STL
// int main(){
//     queue<int> q;

//     q.push(1);
//     q.push(2);
//     q.push(3); //1,2,3

//     while(!q.empty()){
//         cout << q.front() <<" ";
//         q.pop();
//     }

//     cout << endl;
//     return 0;
// }

// Implement the deque
int main()
{
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    dq.pop_back();
    cout << dq.front() << " " << dq.back() << endl;

    return 0;
}
