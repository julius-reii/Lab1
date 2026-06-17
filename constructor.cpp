#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    int age;
    string name;

public:

student(string name, int age ) {
    this->age = age;
    this->name = name;
}

void showData()
{
    cout << age << endl;
    cout << name << endl;
}

};

int main()
{
    student s = student("rishav", 10);  

    s.showData();

    return 0;

    
}