#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long i , n , num =0 ,d;
    cout<<"Enter any Binary Number : ";
    cin>> n ;
    cout<<"\nThe Decimal Conversion Of "<<n<< " is : ";
    for(i =0 ; n!=0 ;++i){
        d = n%10 ;
        num = d * (pow(2,i)) + num ;
        n =n/10;
    }



    cout<< num;
    return 0;
}
