#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value for A ";
    cin>>a;
    cout<<"Enter value for B ";
    cin>>b;
    cout<<"\n value of A and B before swapping A :"<<a<<" B :"<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n\n value of A and B after swapping A :"<<a<<" B :"<<b;
    getch();
    return 0;
}
