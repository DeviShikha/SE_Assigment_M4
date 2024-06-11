/*
3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/

#include<iostream>
using namespace std;

class car
{
    string comp;
    string model;
    int year;

    public :
    void get_car()
    {
        cout<<"\n\n\t Enter the Company Name : ";
        cin>>comp;
        cout<<"\n\n\t Enter the Model of Car : ";
        cin>>model;
        cout<<"\n\n\t Enter the year : ";
        cin>>year;
    }
    void Print_car()
    {
        cout<<"\n\n\t Company Name :"<<comp;
        cout<<"\n\n\t Model : "<<model;
        cout<<"\n\n\t Year : "<<year;
    }
};

int main()
{
    car C;

    C.get_car();
    C.Print_car();
}