/*
4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/

#include<iostream>
using namespace std;

class circle
{
    int A;
    int r;
    int C;

    public :
    void get_circle()
    {
        cout<<"Enter the Radius :";
        cin>>r;
    }
    void print_circle()
    {
        A=3.14*r*r;
        cout<<"\n\n\t The value of Area : "<<A;
        

        C=2*3.14*r;
        cout<<"\n\n\t The value of Circumference :"<<C;
    }
   

};
int main()
{
    circle C;

    C.get_circle();
    C.print_circle();
}