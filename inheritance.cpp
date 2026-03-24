#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this ->name = name ;
        this -> age = age;


    }
    // Person(){

    // }

};
class Students :  public Person{
public :
    int roll;
    Students (string name , int age, int roll) : Person( name ,  age){
        this ->roll = roll;
    }
    void getInfo(){
        cout<<"name : " << name <<endl;        
        cout<<"age: " << age <<endl;            
        cout<<"ROLL NO: " << roll <<endl;            

    }
};

int main(){
    Students s1("Shubh",22,04);
    // s1.name = "Shubh";
    // s1.age = 22;
    // s1.roll = 04;
    s1.getInfo();
    return 0;
}