#include <iostream>

using namespace std;

int main()
{
     int x,y,temp;
     cout<<"enter the value of x and y \n";
     cin>>x>>y;
     cout<<"Before swapping \n x = "<<x<<"\n y = "<<y<<endl;
     temp=x;
     x=y;
     y=temp;
     cout<<"after Swapping \n x = "<<x<<"\n y = "<<y<<endl;
}
