/*
2. Write a program of Addition, Subtraction, Division, Multiplication
using constructor.?
*/

#include <iostream>
using namespace std;

class condition
{
    float a, b;

public:
    condition()
    {
        a = 5;
        b = 2;
    }
    void get_value()
    {
        cout<<"\n\n\t This is addition "<<a<<" + "<<b<<" = "<<a+b;
        cout<<"\n\n\t This is Subtraction "<<a<<" - "<<b<<" = "<<a-b;
        cout<<"\n\n\t This is Division "<<a<<" / "<<b<<" = "<<a/b;
        cout<<"\n\n\t Tis is Multiplication "<<a<<" * "<<b<<" = "<<a*b;
    }

    ~condition()
    {
        cout<<"\n\n\t Destructor is called ";
    }
};
int main()
{
    condition C;

    C.get_value();
    
}