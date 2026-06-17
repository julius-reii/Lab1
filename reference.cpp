//swap using pass by pointer

#include <iostream>

using namespace std;

void swap(int * a, int * b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;
    swap(&a, &b);

    cout << "A : " << a << "B : " << b << endl;

    swap(a, b);

    cout << "A : " << a << "B : " << b << endl;

    return 0;

}