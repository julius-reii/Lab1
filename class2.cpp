#include <iostream>
#include <string>

using namespace std;


class student
{
private: //private access specifier protected
    string Name;
    int Age;
    float Percent;

public: //public access specifier

    student()
    {
        cout << "Default Constructor" << endl;

        this->Name = "null";
        this->Age = 0;
        this->Percent = 0.0;
    }

    student(string name, int age, float percent)
    {
        cout << "Constuctor with arguement" << endl;
        this->Name = name;
        this->Age = age;
        this->Percent = percent;
    }

    void showData();//need prototype inside the class to define function outside the class that relates it to the class
    void setData(string name = "null", int age = 0, float percent = 0.0); //function with defualt arguement
    //value is replaced from left to right while function call


    ~student() // destructor; name same as the class but with tilde ~ sign in front
    //has no arguements
    //automaticaly clears the memory used by the object
    {
        cout << "Destructor called" << endl;
    }
};
//
void student::showData() //scope resolution operator; <return type> student class showData()
{
    cout << "====================================" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Address: " << Percent << endl;
    cout << "====================================" << endl;
}

void student::setData(string name, int age, float percent)
{
    (*this).Name = name; //this pointer to the object that calls it
    this->Age = age;
    this->Percent = percent;

    //this pointer is the majical pointer that always points to the object it is calling
}

int main()
{

    student s1;

    s1.showData();

    student s2("Rishav", 18, 90.5);

    {
        student s4;
        cout << "test" << endl;
    }

    s2.showData();


    

    return 0;
}