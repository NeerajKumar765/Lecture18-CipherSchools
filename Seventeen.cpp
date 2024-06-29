#include<iostream>
using namespace std;

void PrintHi()
{
    cout << "Hi" << endl;
}

int sum(int a, int b)
{
    int c = a + b;
    a = 500; // This change won't affect the variables outside this function
    cout << "The value of c is " << c << endl;
    return c;
}

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
    cout << "The values of a and b after swapping inside the function are: " << a << " " << b << endl;
}

void fun(int &a, int b)
{
    a = 99999;
    b = 99999; // This change won't affect the variable outside this function because it is passed by value
    cout << "The values of a and b inside fun function are: " << a << " " << b << endl;
}

int main()
{
    PrintHi();

    int a, b;
    a = 4;
    b = 6;

    cout << "The values of a and b before passing into the fun function are: " << a << " " << b << endl;
    fun(a, b);
    cout << "The values of a and b after passing into the fun function are: " << a << " " << b << endl;

    return 0;
}
