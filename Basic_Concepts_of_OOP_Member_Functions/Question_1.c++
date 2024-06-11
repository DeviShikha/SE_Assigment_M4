/*
1. WAP to create simple calculator using class.?
*/


#include<iostream>
using namespace std;
class calculator
{
    int n1,n2,total;

    public :
    void get_calsi()
    {
    cout<<"\n\n\t Enter the First number :";
    cin>>n1;
    cout<<"\n\n\t Enter the Second number :";
    cin>>n2;
    }
    void print_add()
    {
        total=n1+n2;
        cout<<"\n\n\t The Calculator of the value : "<<total;
    }
};
int main()
{
    calculator C;
    C.get_calsi();
    C.print_add();
}