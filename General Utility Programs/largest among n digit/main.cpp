#include <iostream>
#include<conio.h>
using namespace std;
    int max_num(int a[],int n);

int main()
{
    int max,i,n;
    int a[100];
    cout<<"enter n number :";
    cin>>n;
    cout<<"enter the numbers \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=max_num(a,n);
    cout<<"the largest number is "<<max;
    getch();

}
int max_num(int a[],int n ){
    int i,m=0;
    for(i=0;i<n;i++){
        if(a[i]>m)
            m=a[i];
    }
    return m;

}
