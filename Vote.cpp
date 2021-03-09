#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"------------------------------Program to check eligibility for Voting--------------------------------------\n ";
    cout<<"Please enter your Age : ";
    cin>>age;
    if(age >= 18)
    {
        cout<<"Congrats! You are Eligible to Vote as your age is greater than or equal to 18";
    }
    else {
        cout<<"Sorry! You are not Eligible to Vote as your age is below 18. Try next year!!!";
    }

    return 0;
}
