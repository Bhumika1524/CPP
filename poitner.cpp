#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout<<"Enter elements of array :";
    for(int i = 0; i <= 4; i++) {
        cin>>arr[i];
        
    }
    int *p = arr;
    cout<<"You entered : ";
    for(int i = 0; i <= 4; i++) {
        cout<<*p<<" ";
        p++;
    }
}



