#include <iostream>
#include<conio.h>

using namespace std;
#define swap(a,b) int temp;temp=a;a=b;b=temp;

int main()
{
       int x,y;
       cout<<"enter two numbers :";
       cin>>x>>y;
       cout<<"x="<<x<<" y="<<y;
       swap(x,y);
       cout<<"\nx="<<x<<" y="<<y;
        return 0;
}
