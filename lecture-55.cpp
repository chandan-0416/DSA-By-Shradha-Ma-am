// Introduction to Linked List 

#include <iostream>
using namespace std;

// Ex.1 - create a node in linked list

class Node {
    public :
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public :
    List() {
        head = tail = NULL;       
    }

    // use the push-front() function
    void push_front(int val){
        Node* newNode = new Node(val); // dynamic object (create karega in memory)
        // Node newNode(val); // static object create karega inside memory

        if(head == NULL) {
            head = tail = newNode;
            return;
        } else {
            newNode->next = head; 
            head = newNode;
        }
    }

    // use the push_back() function
    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail-> next = newNode;
            tail = newNode;
        }
    }

    // use pop_front() function
    void pop_front(){
        if(head == NULL) {
            cout << " LL is empty \n";
            return;
        }

        Node* temp = head;
        head = head-> next;
        temp-> next = NULL;

        delete temp;
    }

    // use the pop_back() function
    void pop_back() {
        if(head == NULL) {
            cout << "LL is empty \n";
            return;
        }

        Node* temp = head;
        while(temp-> next != tail) {
            temp = temp->next;
        }
        temp-> next = NULL;
        delete tail;
        tail = temp;
    }
    // insert in the middle of the linked list
    void insert(int val, int pos) {
        if(pos < 0) {
            cout << "invalid pos\n";
            return;
        }

        if(pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0; i<pos-1; i++) {

            if(temp == NULL) {
                cout << "invalid pos\n";
                return;
            }
            temp = temp->next;
        }

        Node* newNode = new Node(val);
        newNode->next = temp-> next;
        temp->next = newNode;
    }

    // print the linked list
    void printLL() {
        Node* temp = head;
         
        while(temp != NULL) {
            cout << temp-> data << "-> ";
            temp = temp->next;
        }
        cout << "NULL" <<endl;
    }

    int search(int key) {
        Node* temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp->data == key) {
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main(){
     List ll;
     ll.push_front(1);
     ll.push_front(2);
     ll.push_front(3);  


     ll.insert(4, 1);
     cout << ll.search(2) <<endl;

     //ll.push_back(4);

     //ll.pop_front();

   //  ll.printLL();

  //   ll.pop_back();

     ll.printLL();
    return 0;
}
 

//Ex.2 - Print a linked list

// class Node {
//     public :
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// class List {
//     Node* head;
//     Node* tail;

//     public :
//     List() {
//         head = tail = NULL;       
//     }

//     void push_front(int val){
//         Node* newNode = new Node(val); // dynamic object (create karega in memory)
//         // Node newNode(val); // static object create karega inside memory

//         if(head == NULL) {
//             head = tail = newNode;
//             return;
//         } else {
//             newNode->next = head;
//             head = newNode;
//         }
//     }
// };

// int main(){
//      List ll;
//      ll.push_front(1);
//      ll.push_front(2);
//      ll.push_front(3);  
//     return 0;
// } 

