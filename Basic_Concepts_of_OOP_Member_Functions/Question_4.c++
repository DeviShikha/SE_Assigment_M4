/*
5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/


#include<iostream>
using namespace std;
class rectangle
{
    int l;
    int w;
    int A;
    int P;

    public :
    void get_rectangle()
    {
        cout<<"\n\n\t Enter the length value :";
        cin>>l;
        cout<<"\n\n\t Enter the width value :";
        cin>>w;
    }
    void print_rectangle()
    {
        A=w*l;
        cout<<"\n\n\t The value of Area :"<<A;
        P=2*(l+w);
        cout<<"\n\n\t The value of perimeter :"<<P;
    }

};

int main()
{
    rectangle R;
    R.get_rectangle();
    R.print_rectangle();
}