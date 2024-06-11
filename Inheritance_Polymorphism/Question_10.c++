/*
4.10 Write a program to concatenate the two strings using Operator Overloading
*/

#include<iostream> 
using namespace std;
 
class AddString 
{
 	public:
	    char s1[25], s2[25];
 
    AddString(char str1[], char str2[])
    {
       	strcpy(this->s1, str1);
     	strcpy(this->s2, str2);
    }
    void operator+()
    {
        cout<<"\n\n\t Concatenation : "<<strcat(s1, s2);
    }
};
 
int main()
{
    char str1[] = "Chaudhary";
    char str2[] = "Shikha";
 
    AddString a1(str1, str2);
 
    +a1;
}