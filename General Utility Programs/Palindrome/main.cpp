#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100],b[100];
    cout<<"Enter the string if it is a palindrome\n";
    cin>>a;

    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0){
        cout<<"Enterd string is a palindrome.\n";

    }else{
        cout<<"Enterd string is not a palindrome\n";
    }

    return 0;
}
