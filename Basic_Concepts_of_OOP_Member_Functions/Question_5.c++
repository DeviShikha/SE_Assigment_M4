/* Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/

#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
    string country;

    public :
    void get_person()
    {
        cout<<"\n\n\t Enter the Persion name :";
        cin>>name;
        cout<<"\n\n\t Enter the Persion age :";
        cin>>age;
        cout<<"\n\n\t Enter the Country :";
        cin>>country;
    }
    void print_person()
    {
        cout<<"\n\n\t The name of persion :"<<name;
        cout<<"\n\n\t  The Persion age :"<<age;
        cout<<"\n\n\t The Persion Country :"<<country;
    }

};

int main()
{
    person P;

    P.get_person();
    P.print_person();
}