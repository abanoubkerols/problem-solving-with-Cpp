#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num,temp,sum,i=1,n=0;
    cout<<"Enter the number ";
    cin>>num;
    sum=0;
    i=num;
    while(num>0){
        n=num%10;
        num=num/10;
        sum=sum+(n*n*n);
    }
    if(sum==i){
        cout<<"\n"<<i<<"is an Armstrong number";
    }else{
        cout<<"\n"<<i<<"is not an armstrong number ";
    }
    return 0;
}
