#include <iostream>
using namespace std;

int main()
{
    float a,b,product;
    cout<<"-------------------Program to calculate product of two Numbers entered by the User-----------------------------\n";
    cout<<"Enter first Number :";
    cin>>a;
    cout<<"Enter second Number :";
    cin>>b;
    product = a * b;
    cout<<"Products of " <<a<<" and "<<b<<" is : "<<product;

    return 0;
}
