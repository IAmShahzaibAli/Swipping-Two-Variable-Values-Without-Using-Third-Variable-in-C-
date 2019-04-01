#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<" Swipe Two Variable Value Without Using Third Variable "<<endl;
    cout<<"Enter a value : "<<endl;
    cin>>a;
    cout<<"Enter b value : "<<endl;
    cin>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<" After Swapping Values "<<a<<endl;
    cout<< "Your a value is : " <<a<<endl;
    cout<<"Your b value is : "<<b<<endl;



    return 0;
}
