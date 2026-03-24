#include<iostream>
using namespace std;

class Teacher
{
// properties
private:
    double salary;
public:

    string name;
    string dept;
    string subject;
    // Non parameterized
    Teacher(){
        dept = "computer science";
    }
    // Parameterized
    Teacher(string name,string dept,string subject){
        this->name = name; // this key word is a pointer which points to obj address
        this->dept = dept;
        this->subject = subject;
    }


// methods -> is aslo called as member funx

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"subject : "<<subject<<endl;
        cout<<"Department : "<<dept<<endl;
    }

    void changeDept(string newDept){
        dept = newDept;
    }
    //setter 
    void setSalary(double s){
        salary = s;
    }
    // geetter
    double getSalary(){
        return salary;
    }
};

class Student{
    public:
    string name;
    double* cgpaptr;
    Student(string name, double cgpa){
        this->name =name;
        // this->cgpa =cgpa; 
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }

    void getInfo(){
        cout<<"name : " << name <<endl;
        cout<<"cgpa : " << *cgpaptr << endl;
    }
};

// data hiding using Encapsulation
class Account
{
private:
    double balance;
    string password;

public:
    string Accountid;
    string username;

};


int main(){
    Teacher t1("shubh","CSE","C++");
      t1.getInfo();// constructor call

    Teacher t2(t1); //default copy constructor call hua.
        t2.getInfo();

    // t1.name = "shubh";
    
    // t1.subject="dsa";
    // t1.setSalary(5000);

    // cout<<t1.name<<endl;
    // cout<<t1.getSalary()<<endl;
    // cout<<t1.dept;
    Student s1("abc",9.80);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaptr) = 9.2;
    s1.getInfo();
    s2.getInfo();

    return 0;
}