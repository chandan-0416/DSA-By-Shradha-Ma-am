//C++ STL Complete Tutorial | Standard Template Library

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;

//1. 

// int main(){
//     vector<int> vec;

//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

// cout<< vec.size() <<endl;
// cout<< vec.capacity() <<endl;

// for(int val : vec){
//     cout << val << " ";
// }
// cout <<endl;

// cout << "val at idx 2 : " << vec[2] << " or " << vec.at(2) << endl;
// cout << "front : " << vec.front() << endl;
// cout << "back : " << vec.back() << endl;

// return 0; 
// }

// 2. 

// int main() {
//     vector<int> vec1 ={ 1, 2, 3, 4, 5};
//     vector<int> vec2(3, 10);
//     vector<int> vec3(vec1);

//     for (int val : vec3){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

//3. 

// int main(){
//     vector<int> vec = {1, 2, 3, 4, 5};

//     // vec.erase(vec.begin());
//     vec.erase(vec.begin()+1, vec.begin()+3);
//     for(int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;

//     return 0;
// }

//4. 

// int main(){
//     vector<int> vec= {1, 2, 3, 4, 5};
//     //vec.insert(vec.begin()+1, 100);
//     //vec.clear();

//     for(int val : vec){
//         cout << val << " ";
//     }
//     cout << endl;
    
//     // cout<< "size : " << vec.size() << endl;
//     // cout<< "capacity : " << vec.capacity() << endl;
    
//     //cout<< "is empty : " << vec.empty() << endl;
//      cout<< "it : " << *( vec.begin()) << endl;
//       cout<< "itr: " << *( vec.end())<< endl;

//     return 0;
// }



//5. Iterator
// int main(){
//     vector<int> vec ={1, 2, 3, 4, 5};

//     vector<int> :: iterator it;

//     for(it = vec.begin(); it !=vec.end(); it++){
//         cout <<*(it) << " ";
//     }
//     cout << endl;
//     return 0;

// }

//6. 
// int main(){
//     vector<int> vec = {1, 2, 3, 4, 5};
//     for(auto it = vec.rbegin(); it != vec.rend(); it++){
//         cout << *(it) << " ";
//     }

//     cout << endl;
//     return 0;
// }


//7. Pair

// int main(){
//     pair<int,int> p = {2,3};


//     cout<< p.first << endl;
//     cout <<p.second << endl;

//     return 0;

// }

//8. 

// int main(){
//     vector<pair<int,int>> vec = {{1,2}, {3,4},{5,6}};

//     vec.push_back({7,8}); // insert
//     vec.emplace_back(9,10); // in-place objects create

//     for(auto p : vec) {
//         cout <<p.first << " " << p.second << endl;
//     }

//     return 0;
// }

//9. Map

// int main(){

//     map<string, int> m;

//     m["tv"] =100;
//     m["laptop"]=150;
//     m["headphone"] =120;
//     m["tablet"]= 50;
//     m["watch"]=50;

//    m.insert({"camera", 25});
//    m.emplace("mouse", 75);

//     for(auto p : m){
//         cout<< p.first << " " << p.second << endl;
//     }

//     cout << "count = " << m.count("laptop") << endl;
//     return 0;
// }

//10. multi map

// int main(){
//     multimap<string, int> m;
//     m.emplace("tv", 50);
//     m.emplace("tv",100);
//     m.emplace("tv", 150);

//    m.erase(m.find("tv"));

//     for(auto p : m){
//         cout << p.first << " " << p.second << endl;
//     }
//     return 0;

// }

//11. unordered map

// int main(){
//     unordered_map<string, int> m;
//     m.emplace("tv", 50);
//     m.emplace("laptop",100);
//     m.emplace("headphone", 150);

//     for(auto p : m){
//         cout << p.first << " " << p.second << endl;
//     }
//     return 0;

// }


//12.  Set

// int main(){
//     set<int> s;

//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//   //  cout << s.size() << endl;
//     cout << "lower bound : " << *(s.lower_bound(4)) << endl;
//     cout << "upper bound : " << *(s.upper_bound(4)) << endl;
    

//     for(auto val : s){
//         cout << val << " "; 
//     }
//     cout << endl;

//       return 0;
// }


//13. multi set
int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

  //  cout << s.size() << endl;
    cout << "lower bound : " << *(s.lower_bound(4)) << endl;
    cout << "upper bound : " << *(s.upper_bound(4)) << endl;
    

    for(auto val : s){
        cout << val << " "; 
    }
    cout << endl;

      return 0;
}
