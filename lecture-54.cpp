// Object Oriented Programmings (OOPs)
#include <iostream>
#include <string>
using namespace std;

// Ex.1

// class Teacher{
//      // properties / attributes
//        private:
//            double salary;

//        public:
//         string name;
//         string dept;
//         string subject;

//       // methods / member functions
//       void changeDept(string newDept){
//              dept = newDept;
//       }

//       // setter function of public
//       void setSalary(double s){
//         salary = s;
//       }
//      // getter function
//      double getSalary(){
//         return salary;
//      }
// };

// int main(){
//      Teacher t1;  // object
//      t1.name = "Chandan Kushwaha";
//      t1.subject = "C++";
//      t1.dept = "Computer Science";
//      t1.setSalary(25000);

//      cout << t1.name <<endl;
//      cout << t1.subject <<endl;
//      cout << t1.dept <<endl;
//      cout << t1.getSalary() << endl;

//     return 0;
// }

// Ex.2

// class Teacher
// {
// private:
//     double salary;

// public:
// // non-parameterized constructor
//     Teacher() // constructor
//     {
//         cout << "Hi, I'm constructor. \n";
//         dept = "Computer Science";
//     }

//     string name;
//     string dept;
//     string subject;

//     void changeDept(string newDept)
//     {
//         dept = newDept;
//     }
//     // setter
//     void setSalary(double s)
//     {
//         salary = s;
//     }
//     // getter
//     double getSalary()
//     {
//         return salary;
//     }
// };

// int main()
// {
//     Teacher t1; // automatically or internally compiler call to constructor, when we create new object. or we can also create constructor.
//     t1.name = "Chandan Kushwaha";
//     t1.subject = "C++";
//     t1.setSalary(25000);

//     cout << t1.name << endl;
//     cout << t1.subject << endl;
//     cout << t1.dept << endl;
//     cout << t1.getSalary() << endl;
//     return 0;
// }

// Ex.3 : non-parameterized & parameterized constructor

// class Teacher
// {
// private:
//     double salary;

// public:
//     // non-parameterized constructor
//     Teacher()
//     {
//         dept = "Computer Science";
//     }
//     // parameterized constructor
//     Teacher(string n, string d, string s, double sal)
//     {
//         name = n;
//         dept = d;
//         subject = s;
//         salary = sal;
//     }
//     string name;
//     string dept;
//     string subject;

//     void changeDept(string newDept)
//     {
//         dept = newDept;
//     }
//     void getInfo()
//     {
//         cout << "name :" << name << endl;
//         cout << "subject : " << subject << endl;
//     }
// };

// int main()
// {
//     Teacher t1("chandan", "computer science", "C++", 25000);
//     t1.getInfo();
//     return 0;
// }

// Ex. 4 | this pointer    && cdefault and custom copy constructor

// class Teacher
// {
// private:
//     double salary;

// public:
//     string name;
//     string dept;
//     string subject;

//     Teacher(string name, string dept, string subject, double salary)
//     {
//         this->name = name; // this keyword
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;
//     }

//     // copy constructor
//     Teacher(Teacher &oriObj)
//     { // pass by reference - (original object)
//         cout << "I'm custom copy constructor ...\n";
//         this->name = oriObj.name;
//         this->dept = oriObj.dept;
//         this->subject = oriObj.subject;
//         this->salary = oriObj.salary;
//     }

//     void changeDept(string newDept)
//     {
//         dept = newDept;
//     }
//     void getInfo()
//     {
//         cout << "name :" << name << endl;
//         cout << "subject : " << subject << endl;
//     }
// };

// int main()
// {
//     Teacher t1("chandan", "computer science", "C++", 25000);
//     t1.getInfo();

//     Teacher t2(t1); // custom copy constructor - invoke   (default bhi hota hai)
//     t2.getInfo();
//     return 0;
// }

// Ex. 5 | shallow or deep copy constructor

// class Student
// {
// public:
//     string name;
//     double *cgpaPtr;

//     Student(string name, double cgpa)
//     {
//         this->name = name;
//         cgpaPtr = new double; // new memory (heap) point krega
//         *cgpaPtr = cgpa;
//     }

//     Student(Student &obj)
//     {
//         this->name = obj.name;
//         cgpaPtr = new double;
//         *cgpaPtr = *obj.cgpaPtr;
//     }

//     void getInfo()
//     {
//         cout << "name : " << name << endl;
//         cout << "cgpa : " << *cgpaPtr << endl;
//     }
// };

// int main(){
//     Student s1("chandan kumar", 5.7);
//     Student s2(s1); // shreya

//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.2;
//     s1.getInfo();

//     s2.name = "shreya";
//     s2.getInfo();
//     return 0;
// }

// 💡Ex. 6 | Destructor

// class Student
// {
// public:
//     string name;
//     double* cgpaPtr;

//     Student(string name, double cgpa)
//     {
//         this->name = name;
//         cgpaPtr = new double; // new memory (heap) point krega
//         *cgpaPtr = cgpa;
//     }
//     // destructor
//     ~Student(){
//         cout << "Hi, I delete everythings\n";
//         delete cgpaPtr;
//     }

//     void getInfo()
//     {
//         cout << "name : " << name << endl;
//         cout << "cgpa : " << *cgpaPtr << endl;
//     }
// };

// int main()
// {
//     Student s1("chandan kumar", 5.7);
//     s1.getInfo();

//     return 0;
// }

// EX.8 | Inheritance

// class Person
// {
// public:
//     string name;
//     int age;

//     Person(string name, int age){
//         this-> name = name;
//         this-> age = age;
//     }

//     Person()
//     {
//     cout <<"parent constructor..\n";
//     }
// };

// class Student : public Person
// {
// public:
//     int rollno;

//     Student(string name, int age, int rollno) : Person(name,age) {
//      this->rollno = rollno;
//     }
//     void getInfo()
//     {
//         cout << "name : " << name << endl;
//         cout << "age : " << age << endl;
//         cout << "rollno : " << rollno << endl;
//     }

// };

// int
// main()
// {
//     Student s1("chandan", 25, 12345);
//     s1.getInfo();
//     return 0;
// }

// Ex.9 Ploymorphism - Compile time Ploymorphism : Eg.
// 1. Constructor overloading

// class Student
// {
// public:
//      string name;

//     Student()
//     {
//         cout << "non-parameterized\n";
//     }

//     Student(string name)
//     {
//         this->name = name;
//         cout << "parameterized\n";
//     }
// };
// int main()
// {
//     Student s1("chandan");
//     return 0;
// }

// 2. Function overloading

// class Print{
//     public:
//     void show(int x){
//         cout <<"int :" << x <<endl;
//     }
//      void show(char ch){
//         cout <<"char :" << ch <<endl;
//     }
// };

// int main(){
//     Print p1;
//     p1.show('&');
//     return 0;
// }

// Ex.10 Ploymorphism - Run time Ploymorphism : Eg.
// 1. Function overriding

// class Parent {
//     public:
//    void getInfo(){
//         cout<<"parent class\n";
//     }
// };

// class Child : public Parent {
//     public:
//     void getInfo(){
//         cout<<"child class\n";
//     }

// };

// int main(){
//     Parent p1;
//     p1.getInfo();

//     return 0;
// }

// 2. Virtual Functions

// class Parent
// {
// public:
//     void getInfo()
//     {
//         cout << "parent class\n";
//     }

//     virtual hello()
//     {
//         cout << "hello from parent\n";
//     }
// };

// class Child : public Parent
// {
// public:
//     void getInfo()
//     {
//         cout << "child class\n";
//     }

//     hello()
//     {
//         cout << "hello from child\n";
//     }
// };

// int main()
// {
//     Child c1;
//     c1.hello();

//     return 0;
// }

// Ex.11  Abstraction

// class Shape
// {                            // abstruct class
//     virtual void draw() = 0; // pure virtual function
// };

// class Circle : public Shape
// {
// public:
//     void draw()
//     {
//         cout << "drawing a circle\n";
//     }
// };

// int main()
// {
//     Circle c1;
//     c1.draw();
//     return 0;
// }

// EX.12 Static Keyword

// 1. Static Variables in Function 
// void fun()
// {

//     static int x = 0; // init statement -1 run
//     cout << "x : " << x << endl;
//     x++;
// }

// int main()
// {
//     fun();
//     fun();
//     fun();
// }

// 2. Static Variables in class

// class A{
//     public:
//     int x;

//     void incX(){
//         x=x+1;
//     }
// } ;

// int main(){
//     A obj1;
//     A obj2;

//     obj1.x=100;
//     obj2.x=200;
//     cout << obj1.x <<endl;

//     return 0;
// }

//3. Static object

class ABC {
    public:
    ABC(){
        cout <<"constructor\n";
    }
    ~ABC(){
        cout<< "destructor\n";
    }
};

int main(){
    if(true) {
       static ABC obj;
    }

    cout <<"end of main fxn\n";
    return 0;
}
