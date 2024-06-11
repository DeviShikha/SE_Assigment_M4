/*
1. Write a program to find the multiplication values and the cubic values
using inline function..?
*/

#include <iostream>
using namespace std;

class program
{
    int n;

public :
    program()
    {
        n = 10;
    }
    inline int multiplication()
    {
        return n * n;
    }
    inline int cubic()
    {
        return n * n * n;
    }
};
int main()
{
    program P;

    int M=P.multiplication();
    cout<<"\n\n\t Multiplication = "<<M;
    int C=P.cubic();
    cout<<"\n\n\t Cube = "<<C;
}