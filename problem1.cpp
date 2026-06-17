#include <iostream>
#include <string>

using namespace std;

//class named student 
class student
{
private:
    string name;
    int age;
    string address;

public:
    void setData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> address;
    }

    void getData()
    {
        cout << "===============================" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "===============================" << endl;
    }
};


int main()
{

    student s1;

    s1.setData();
    s1.getData();

    return 0;

}
