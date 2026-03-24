#include<iostream>
using namespace std;
class Student{
    public:
    string  name;
    Student(){
       cout<< " this is non parametrized const"<<endl; 
    }
    Student(string name){
       this->name = name ;
       cout<< "parametrized "<< endl; 
    }
};

int main()
{
    Student s1("tony");
    cout<<s1.name<<endl;
    return 0;
}