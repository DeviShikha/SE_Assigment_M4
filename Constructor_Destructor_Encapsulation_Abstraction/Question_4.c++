/*
4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

#include<iostream>
using namespace std;

class bank_Account
{
    int account_no;
    int balance;
    int dept;
    int widrw;
    int total2;


    public :
    void get_account()
    {
        cout<<"\n\n\t Enter the account Number ";
        cin>>account_no;
        cout<<"\n\n\t Enter the balance ";
        cin>>balance;
        cout<<"\n\n\t Enter the Deposit Amount ";
        cin>>dept;
        cout<<"\n\n\t Enter the Withdrow Amount ";
        cin>>widrw;
    }
    
    void print_account()
    {
        cout<<"\n\n\t Account Number : "<<account_no;
        cout<<"\n\n\t Balance :"<<balance;
    }
    void money()
    {
        total2=dept+balance;
        cout<<"\n\n\t Deposit :"<<total2;
        cout<<"\n\n\t Withdrow : "<<widrw;
    }

    void total()
    {
        int total;
        total= total2 - widrw;
        cout<<"\n\n\t The Available Balance : "<<total;
    }

};

int main()
{
    bank_Account B;

    B.get_account();
    B.print_account();
    B.money();
    B.total();


}