#include <iostream>
using namespace std;

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    int num;
    cout<<"Enter the number you want table for : ";
    cin>>num;
    cout<<"--------------------Table of "<<num<<"---------------------------------------"<<endl;
    for (int i = 0; i < 10; i++) {
        
        cout<<x[i]<<"x"<<num<<"="<<x[i]*num<<endl;
        x[i] *= num;
        
    }
    cout<<"--------------------Table of "<<num<<" in ascending order"<<"---------------------------------------"<<endl;
    for (int i = 0; i < 10; i++) {
        
        cout<<x[i]<<endl;
        
    }
    cout<<"--------------------Table of "<<num<<" in descending order"<<"---------------------------------------"<<endl;
    for (int i = 9; i >= 0; i--) {
        
        cout<<x[i]<<endl;
        
    }
    return 0;
}

