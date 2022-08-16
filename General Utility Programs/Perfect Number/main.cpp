#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    int sum=0;
    cout<<"enter a number : ";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==n)
    {
        cout<<i<<" is  perfect number";
    }
    else
    {
        cout<<i<<" is not perfect number";
    }

    return 0;
}
